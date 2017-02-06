#----------------------Distributions-----------------------------------------#
#----------------------------------------------------------------------------#
#----------------------This is a plot for the case 1-------------------------#
#clear
#reset
#set key off
#set border 3
#
#set boxwidth 0.005 absolute
#set style fill solid 3.0 noborder
#
#bin_width = 0.007;
#
#bin_number(x) = floor(x/bin_width)
#
#rounded(x) = bin_width * ( bin_number(x)) # + 50.5 )
#kbt = 0.0000151449
#stats "/home/marijane/final_results/sys_4/average_paraview_4_2_and_3.csv" using 1 name 'case'
#print  case_stddev
#set label 1 font ',20' sprintf('Std Dev = %3.2e', case_stddev) at graph 0.05 , graph 0.9, 0  #8400 , 10, 0
#set label 2 font ',20' sprintf('Mean = %3.2f', case_mean) at  graph 0.05 , graph 0.95, 0      #8400, 8, 0
#set label 3 font ',20' sprintf('Min = %3.2e', case_min) at graph 0.05 , graph 0.85, 0
#set label 4 font ',20' sprintf('Max = %3.2e', case_max) at graph 0.05 , graph 0.8, 0
##set label 5 sprintf('Variance = %3.4f', 742485) at graph 0.05 , graph 0.75, 0
#set xtics font ',20'
#set ytics font ',20'
#plot "/home/marijane/final_results/sys_4/average_paraview_dist1.txt" using (rounded($1)):(1)  smooth frequency with boxes
##set xtics 8250, 300, 10000 font ',20'
#set title font ',30' sprintf("Distribution of volumes k_BT= %3.2e", kbt)
#set xlabel font ',25' "Volume"
#set ylabel font ',25' "Frequency"
#
#set terminal postscript  enhanced eps color
#
#set output  "/home/marijane/final_results/sys_4/distribution_kbt_1.eps"
#
#replot
#-----------------------k_BT 2-----------------------------------------------#
#clear
#reset
#set key off
#set border 3
#
#set boxwidth 0.005 absolute
#set style fill solid 3.0 noborder
#
#bin_width = 0.007;
#
#bin_number(x) = floor(x/bin_width)
#
#rounded(x) = bin_width * ( bin_number(x)) # + 50.5 )
#kbt = 0.0000454347
#stats "/home/marijane/final_results/sys_4/average_paraview_4_6_and_7.csv" using 1 name 'case'
#print  case_stddev
#set label 1 font ',20' sprintf('Std Dev = %3.2e', case_stddev) at graph 0.05 , graph 0.9, 0  #8400 , 10, 0
#set label 2 font ',20' sprintf('Mean = %3.2f', case_mean) at  graph 0.05 , graph 0.95, 0      #8400, 8, 0
#set label 3 font ',20' sprintf('Min = %3.2e', case_min) at graph 0.05 , graph 0.85, 0
#set label 4 font ',20' sprintf('Max = %3.2e', case_max) at graph 0.05 , graph 0.8, 0
##set label 5 sprintf('Variance = %3.4f', 742485) at graph 0.05 , graph 0.75, 0
#set xtics font ',20'
#set ytics font ',20'
#plot "/home/marijane/final_results/sys_4/average_paraview_dist2.txt" using (rounded($1)):(1)  smooth frequency with boxes
##set xtics 7550, 400, 10650 font ',20'
#set title font ',30' sprintf("Distribution of volumes k_BT= %3.2e", kbt)
#set xlabel font ',25' "Volume"
#set ylabel font ',25' "Frequency"
#
#set terminal postscript  enhanced eps color
#
#set output  "/home/marijane/final_results/sys_4/distribution_kbt_2.eps"
#
#replot
#--------------------------k_BT 3---------------------------------------------#
#clear
#reset
#set key off
#set border 3
#
#set boxwidth 0.005 absolute
#set style fill solid 3.0 noborder
#
#bin_width = 0.007;
#
#bin_number(x) = floor(x/bin_width)
#
#rounded(x) = bin_width * ( bin_number(x)) # + 50.5 )
#kbt = 0.0000757245
#stats "/home/marijane/final_results/sys_5/average_paraview_5_2_and_3.csv" using 1 name 'case'
#print  case_stddev
#set label 1 font ',20' sprintf('Std Dev = %3.2e', case_stddev) at graph 0.05 , graph 0.9, 0  #8400 , 10, 0
#set label 2 font ',20' sprintf('Mean = %3.2f', case_mean) at  graph 0.05 , graph 0.95, 0      #8400, 8, 0
#set label 3 font ',20' sprintf('Min = %3.2e', case_min) at graph 0.05 , graph 0.85, 0
#set label 4 font ',20' sprintf('Max = %3.2e', case_max) at graph 0.05 , graph 0.8, 0
##set label 5 sprintf('Variance = %3.4f', 742485) at graph 0.05 , graph 0.75, 0
#set xtics font ',20'
#set ytics font ',20'
#plot "/home/marijane/final_results/sys_5/average_paraview_dist3.txt" using (rounded($1)):(1)  smooth frequency with boxes
##set xtics 7150, 500, 11150 font ',20'
#set title font ',30' sprintf("Distribution of volumes k_BT= %3.2e", kbt)
#set xlabel font ',25' "Volume"
#set ylabel font ',25' "Frequency"
#
#set terminal postscript  enhanced eps color
#
#set output  "/home/marijane/final_results/sys_5/distribution_kbt_3.eps"
#
#replot
#--------------------dist of difference --------------------------------------#
#clear
#reset
#set key off
#set border 3
#
##set boxwidth 50.0 absolute
#set style fill solid 3.0 noborder
#set boxwidth 0.11 absolute
#bin_width = 0.22;
#
#bin_number(x) = floor(x/bin_width)
#
#rounded(x) = bin_width * ( bin_number(x)) # + 50.5 )
#kbt = 0.0001060143
#stats "/home/marijane/final_results/mean_total_difference.txt" using 1 name 'case'
#print  case_stddev
#set label 1 font ',20' sprintf('Std Dev = %3.2e', case_stddev) at graph 0.25 , graph 0.9, 0  #8400 , 10, 0
#set label 2 font ',20' sprintf('Mean = %3.2f', case_mean) at  graph 0.25 , graph 0.95, 0      #8400, 8, 0
#set label 3 font ',20' sprintf('Min = %3.2e', case_min) at graph 0.25 , graph 0.85, 0
#set label 4 font ',20' sprintf('Max = %3.2e', case_max) at graph 0.25 , graph 0.8, 0
##set label 5 sprintf('Variance = %3.4f', 742485) at graph 0.05 , graph 0.75, 0
#set xtics font ',20'
#set ytics font ',20'
#plot "/home/marijane/final_results/mean_total_difference_2.txt" using (rounded($1)):(1)  smooth frequency with boxes
#set xtics 0, 1, 8 font ',20'
#set title font ',30' sprintf("Distribution of volumes |V_1-V_2|")
#set xlabel font ',25' "Difference |V_1-V_2| normalized" offset 0,-.4,0
#set ylabel font ',25' "Frequency"
#
#set terminal postscript  enhanced eps color
#
#set output  "/home/marijane/final_results/distribution_diff.eps"
#
#replot
#--------------------------k_B T 4-------------------------------------------#
#
#clear
#reset
#set key off
#set border 3
#
#set boxwidth 0.005 absolute
#set style fill solid 3.0 noborder
#
#bin_width = 0.007;
#
#bin_number(x) = floor(x/bin_width)
#
#rounded(x) = bin_width * ( bin_number(x)) # + 50.5 )
#kbt = 0.0001060143
#stats "/home/marijane/final_results/sys_5/average_paraview_5_6_and_7.csv" using 1 name 'case'
#print  case_stddev
#set label 1 font ',20' sprintf('Std Dev = %3.2e', case_stddev) at graph 0.05 , graph 0.9, 0  #8400 , 10, 0
#set label 2 font ',20' sprintf('Mean = %3.2f', case_mean) at  graph 0.05 , graph 0.95, 0      #8400, 8, 0
#set label 3 font ',20' sprintf('Min = %3.2e', case_min) at graph 0.05 , graph 0.85, 0
#set label 4 font ',20' sprintf('Max = %3.2e', case_max) at graph 0.05 , graph 0.8, 0
##set label 5 sprintf('Variance = %3.4f', 742485) at graph 0.05 , graph 0.75, 0
#set xtics font ',20'
#set ytics font ',20'
#plot "/home/marijane/final_results/sys_5/average_paraview_dist4.txt" using (rounded($1)):(1)  smooth frequency with boxes
##set xtics 7150, 500, 11150 font ',20'
#set title font ',30' sprintf("Distribution of volumes k_BT= %3.2e", kbt)
#set xlabel font ',25' "Volume"
#set ylabel font ',25' "Frequency"
#
#set terminal postscript  enhanced eps color
#
#set output  "/home/marijane/final_results/sys_5/distribution_kbt_4.eps"
#
#replot
#-------------------------------mean------------------------------------------#
#reset
#clear
#
#stats "/home/marijane/final_results/sys_4/average_paraview_4_2_and_3.csv" using 1 name 'case1'
#stats "/home/marijane/final_results/sys_4/average_paraview_4_6_and_7.csv" using 1 name 'case2'
#stats "/home/marijane/final_results/sys_5/average_paraview_5_2_and_3.csv" using 1 name 'case3'
#stats "/home/marijane/final_results/sys_5/average_paraview_5_6_and_7.csv" using 1 name 'case4'
#
#LT1 = 0.0001
#LT2 = 0.0003
#LT3 = 0.0005
#LT4 = 0.0007
#set xrange [0.00009:0.0009]
##set yrange [9152:9158]
##f(x)= d*exp(-x*j)+n
##g(x)= d*x**n
#set ylabel 'Mean volume' font ',20'
#set xlabel 'L_T^2= (K_BT/ {/Symbol s})' font ',20'
#set title 'Mean volume of the droplets' font ',30'
#l(x) = y0 + m*x
#fit l(x) '/home/marijane/final_results/mean_calculations.csv' using 1:3 via y0, m
##fit f(x) '/home/marijane/final_results/mean_calculations.csv' using 1:3 via d,j, n
##print a,b,c
#plot '/home/marijane/final_results/mean_calculations.csv' using 1:3:5 title 'Mean' \
#      with errorbars lw 5, \
#      l(x) lw 5 title 'Linear fit' \
##      f(x) lw 5 title 'Exponential fit'
##plot '+' using (LT1):(case1_mean) title 'k_BT 1' lw 6, \
##     '+' using (LT2):(case2_mean) title 'k_BT 2' lw 6, \
##     '+' using (LT3):(case3_mean) title  'k_BT 3' lw 6, \
##     '+' using (LT4):(case4_mean) title  'k_BT 4' lw 6, \
#
#     # f(x) lw 5, \
#     # g(x) lw 5
#
#print case1_mean, case2_mean, case3_mean, case4_mean
#set label 1 font ',20' sprintf('y0 = %3.2e', y0) at graph 0.15 , graph 0.44, 0  #8400 , 10, 0
#set label 2 font ',20' sprintf('m = %3.2e', m) at graph 0.15 , graph 0.39, 0  #8400 , 10, 0
#set label 3 font ',20' sprintf('l(x) = y0 + m*x' ) at graph 0.15 , graph 0.5, 0  #8400 , 10, 0
#set border back lw 4
#set key font ",20"
#set tics font ",18"
#set xtics .0001, .0001, .0008
#set terminal postscript  enhanced eps color
#set output  "/home/marijane/final_results/mean.eps"
##
#replot
###-----------------mean total--------------------------------------------------#
#reset
#clear
#
#stats "/home/marijane/final_results/sys_4/average_total_4_2_and_3.csv" using 1 name 'case1'
#stats "/home/marijane/final_results/sys_4/average_total_4_6_and_7.csv" using 1 name 'case2'
#stats "/home/marijane/final_results/sys_5/average_total_5_2_and_3.csv" using 1 name 'case3'
#stats "/home/marijane/final_results/sys_5/average_total_5_6_and_7.csv" using 1 name 'case4'
#f(x)= a*exp(-x*b)+c
#LT1 = 0.0001
#LT2 = 0.0003
#LT3 = 0.0005
#LT4 = 0.0007
#set xrange [0.00009:0.0009]
##set yrange [9152:9158]
#set ylabel 'Mean volume' font ',20'
#set xlabel 'L_T^2= (K_BT/ {/Symbol s})' font ',20'
#set title 'Mean total volume of the two droplets' font ',30'
#l(x) = y0 + m*x
#fit l(x) '/home/marijane/final_results/mean_calculations.csv' using 1:2 via y0, m
##plot '+' using (LT1):(case1_mean) title 'k_BT 1' lw 6, \
##     '+' using (LT2):(case2_mean) title 'k_BT 2' lw 6, \
##     '+' using (LT3):(case3_mean) title  'k_BT 3' lw 6, \
##     '+' using (LT4):(case4_mean) title  'k_BT 4' lw 6, \
#
#plot '/home/marijane/final_results/mean_calculations.csv' using 1:2:4 title 'Mean' \
#      with errorbars lw 5,\
#     l(x) lw 5 title 'Linear fit'
#print case1_mean, case2_mean, case3_mean, case4_mean
#
#set label 1 font ',20' sprintf('y0 = %3.2e', y0) at graph 0.15 , graph 0.44, 0  #8400 , 10, 0
#set label 2 font ',20' sprintf('m = %3.2e', m) at graph 0.15 , graph 0.39, 0  #8400 , 10, 0
#set label 3 font ',20' sprintf('l(x) = y0 + m*x' ) at graph 0.15 , graph 0.5, 0  #8400 , 10, 0
#set border back lw 4
#set key font ",20"
#set tics font ",18"
#set xtics .0001, .0001, .0008
#set terminal postscript  enhanced eps color
#set output  "/home/marijane/final_results/mean_total.eps"
##
#replot
###----------------------------------------------------------------------------#
###-------------------Variance-------------------------------------------------#
###----------------------------------------------------------------------------#
##clear
##reset
##
##l(x) = y0 + m*x
##fit l(x) '/home/marijane/final_results/variance.csv' using 1:3 via y0, m
##plot '/home/marijane/final_results/variance.csv' using 1:3:4 title 'Variance' \
##      with errorbars lw 5, \
##      l(x) title 'linear fit' lw 5
##set ylabel 'Variance' font ',25' offset -1.7,0,0
##set xlabel 'K_BT' font ',25' offset 0,-1.1,0
##set title 'Variance of the distributions ' font ',30'
##set xrange [.000011:.00011]
##set format x "%.0t*10^%S"
##set format y "%.0t*10^%S"
##set xtics 1.7e-5, .00002, 1e-4 font ',20'
##set ytics font ',20'
##set key font ',20' at graph 0.35, graph 0.95, 0
##set label 1 font ',20' sprintf('y0 = %3.2e', y0) at graph 0.15 , graph 0.74, 0  #8400 , 10, 0
##set label 2 font ',20' sprintf('m = %3.2e', m) at graph 0.15 , graph 0.69, 0  #8400 , 10, 0
##set label 3 font ',20' sprintf('l(x) = y0 + m*x' ) at graph 0.15 , graph 0.8, 0  #8400 , 10, 0
##set border back lw 4
##set terminal postscript  enhanced eps color
###set ytics offset 0.05
###set logscale x
##set output  "/home/marijane/final_results/plot_variance_1.eps"
##replot
##
clear
reset

l(x) = y0 + m*x
fit l(x) '/home/marijane/final_results/variance.csv' using 2:3 via y0, m
plot '/home/marijane/final_results/variance.csv' using 2:3:4 title 'Variance' \
      with errorbars lw 5, \
      l(x) title 'linear fit' lw 5
set ylabel 'Variance' font ',25' offset -1.7,0,0
set xlabel 'L_T^2= (K_BT/ {/Symbol s})' font ',25' offset 0,-1.1,0
set title 'Variance of the distributions ' font ',30'
set xrange [.000089:.00072]
set format x "%.0t*10^%S"
set format y "%.0t*10^%S"
set xtics font ',20'
set ytics font ',20'
set border lw 4
set key font ',20' at graph 0.35, graph 0.95, 0
set label 1 font ',20' sprintf('y0 = %3.2e', y0) at graph 0.15 , graph 0.74, 0  #8400 , 10, 0
set label 2 font ',20' sprintf('m = %3.2e', m) at graph 0.15 , graph 0.69, 0  #8400 , 10, 0
set label 3 font ',20' sprintf('l(x) = y0 + m*x' ) at graph 0.15 , graph 0.8, 0  #8400 , 10, 0
set border back lw 4
set terminal postscript  enhanced eps color
#set ytics offset 0.05
#set logscale x
set output  "/home/marijane/final_results/plot_variance_2.eps"
replot




