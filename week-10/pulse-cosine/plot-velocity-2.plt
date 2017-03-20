#!/usr/bin/gnuplot

plot "pulse-cosine-exp-2.txt" u 1:2 , "pulse-cosine-exp-2.txt" u 1:3, \
"pulse-cosine-exp-2.txt" u 1:4, "pulse-cosine-exp-2.txt" u 1:5, \
"pulse-cosine-exp-2.txt" u 1:6
#set terminal postscript enhanced eps color
set terminal png  enhanced
set output "plot-2.png"
set xlabel 'time steps'
set ylabel 'velocity'
set title 'velocity pulse in the inlet'
replot
