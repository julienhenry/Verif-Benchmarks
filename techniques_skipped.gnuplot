set terminal png medium
set output "techniques_skipped.png"
#set terminal epslatex
#set output "techniques_skipped.tex"
set size 0.7,1
set boxwidth 1.0 absolute
set style fill pattern noborder
#set style fill solid 1.0 border
set style line 1 lt -1 linecolor rgb "red" lw 3 
set style line 2 lt -1 linecolor rgb "green" lw 3 
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
set label 1 "number of warnings" at graph -0.125, graph 0.5 center rotate
#set xlabel "Techniques"

#plot 'gnuplot/data' using 3 t "stronger" ls 1, '' using 4 t "weaker" ls 2 fs pattern 10, '' using 5:xtic(1) t "uncomparable" ls 3 fs pattern 6
plot '/tmp/data_skipped_gnuplot' using 2:xtic(1) t "skipped" fs solid 1.0 ls 1

