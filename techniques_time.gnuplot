#set terminal png medium
#set output "techniques_time.png"
set terminal svg size 700,400 fname 'Verdana' fsize 10
set output 'techniques_time.svg'
#set terminal epslatex
#set output "techniques_time.tex"
set size 0.7,1
set boxwidth 1.0 absolute
set style fill pattern noborder
#set style fill solid 1.0 border
set style line 1 lt -1 linecolor rgb "blue" lw 3 
set style line 2 lt -1 linecolor rgb "red" lw 3 
set style line 3 lt -1 linecolor rgb "orange" lw 3
#set style line 1 lt -1 lw 3 
set style line 2 lt -1 lw 3 
set style line 3 lt -1 lw 3
#set style histogram rowstacked
set style data histograms
set mxtics 2
set mytics 2
#set xtics 2 rotate by -45
#set ytics 2
set yrange [0:*]
set label 1 "percentage of control points" at graph -0.125, graph 0.5 center rotate
#set xlabel "Techniques"

#plot 'gnuplot/data' using 3 t "stronger" ls 1, '' using 4 t "weaker" ls 2 fs pattern 10, '' using 5:xtic(1) t "uncomparable" ls 3 fs pattern 6
plot '/tmp/data_time_gnuplot' using 2:xtic(1) t "time" fs solid 0.7 ls 1, '' using 3 t "time SMT" fs solid 0.7 ls 3

