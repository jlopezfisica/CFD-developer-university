#!/usr/bin/gnuplot

plot "data-parabola.txt"
set terminal postscript enhanced
set output "figure-parabola.eps"
replot
