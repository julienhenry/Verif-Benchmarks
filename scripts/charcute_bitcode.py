import re
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("filename")
parser.add_argument("-o", "--output", type=str, help="defines the output file. default : stdout")
parser.add_argument("--withinputfunctions", help="add gen_*() functions",action="store_true")

args = parser.parse_args()
withinput = args.withinputfunctions

output=""
input=""
locals=""
globaldef=""
metadata=""

nbfunctions=0

# the set of variable names that are moved from globals to locals
variables = set()
# the set of types for wich we have to create a @gen_* function
types = set()

for line in open(args.filename):
  line=line.rstrip()
  input += line + "\n"
  #match=re.match('@([A-Za-z0-9_.]+) =(?: external| internal| common)?(?: unnamed_addr)? global (float|double|i32|i16|i8|i1) ?([0-9.e+-]+|true|false)?(?:, align 4)?', line)
  match=re.match('@([A-Za-z0-9_.]+) =(?: external| internal| common)?(?: unnamed_addr)? (?:global|constant)? (float|double|i32|i16|i8|i1)[^\*] ?([A-Z0-9.e+-x]+|true|false)?(?:, align 4)', line)
  if match:
    variable = match.group(1)
    ctype = match.group(2)
    initializer = match.group(3)
    locals += "  %" + variable + " = alloca " + ctype + "\n"
    if withinput:
        locals += "  %tmp" + variable + " = call " + ctype + " @gen_" + ctype + "()"+ "\n"
        locals += "  store " + ctype + " %tmp" + variable + ", " + ctype + "* %" + variable+ "\n"
    locals += "  store " + ctype + " " + initializer + ", " + ctype + "* %" + variable+ "\n"
    variables.add(variable)
    types.add(ctype)
    globaldef += line + "\n"
  else:
    match = re.match('!([0-9]+) = metadata !{[^\n]*',line)
    if match:
        metadata += line + "\n"
    else:
        output += line + "\n"

    # check if the line defines a function
    # if the bitcode contains several functions, we cannot move globals to
    # locals
    match=re.search('define (?:[A-Za-z0-9_.]+) @([A-Za-z0-9_.]+)(?:[^\n]*){',line)
    if match:
        nbfunctions+=1



for v in variables:
    output = output.replace('@'+v+' ','%'+v+' ')
    output = output.replace('@'+v+',','%'+v+',')
    output=re.sub(r'bitcast \((float|double|i32|i16|i8|i1)\* %'+v,
                r'bitcast (\1* undef',
                output)

#match=re.search('define (?:void|i32|i8) @([A-Za-z0-9_.]+)\([^\)]*\)[A-Za-z]*\{',output)
match=re.search('define (?:[A-Za-z0-9_.]+) @([A-Za-z0-9_.]+)(?:[^\n]*)\n([A-Za-z0-9_.]+):',output)
if match:
    first_label = match.group(2)
else:
    first_label = 'entry'

output = output.replace(first_label+':\n',first_label+':\n'+locals)

output = output.replace('\n\n', '\n\n'+globaldef,1)

if withinput:
    for t in types:
        output += "declare " + t + " @gen_" + t + "() nounwind\n"

output += metadata
#print variables
#print locals

if nbfunctions > 1 :
    #print "ERROR: This IR file contains " + str(nbfunctions) + " function definitions, while there should be only one"
    print input
else:
    #print "done"
    print output

