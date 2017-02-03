#!/usr/bin/gnuplot

plot "text.txt"
set terminal postscript enhanced
set output "plot.eps"
replot
