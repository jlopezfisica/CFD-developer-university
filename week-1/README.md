###This is the summary of activities from the README
It has been an awesome week, I started to follow the C programming language
book religiously, because it explains the standar library of C and it has
a clear description of the basic features in C. It is imprescindible to
read it carefully to understand C.

In addition, I took the shell and the git course in codeacademy, which helped
me to check my basic knowledge of these tools. I will print the summary of
my code in this file by using shell commands such as:

* echo "Hello" > hello.txt 
  
and other sort of pipeline commands. Finally, I love learning C because
if you learn C you also get to know how the linux system works.
-----------------------------------
-----------------------------------
find . -name '*.c' | xargs wc -l > cat >> README.md
-----------------------------------
-----------------------------------
   76 ./getfloat.c
   10 ./ternary-operator.c
   17 ./global_var.c
   36 ./sum_array.c
   35 ./atof2.c
   64 ./getint.c
   50 ./strindex-chap4.c
  138 ./rpn-modulus.c
   10 ./main.c
   30 ./mstrindex.c
   20 ./goto.c
   14 ./pointer2.c
   15 ./strlen.c
  199 ./rpn-modulus-functions.c
   12 ./pointers1.c
   10 ./c-type-casting.c
   15 ./memset.c
   11 ./c_arithmetic_conversions.c
   49 ./itob.c
   38 ./trim.c
   46 ./itoa.c
   15 ./local_var.c
   23 ./white-space.c
   28 ./isspace.c
   16 ./swap.c
   16 ./strcpy.c
   26 ./formal-param.c
   13 ./c_inverts.c
   16 ./math-cos.c
   44 ./expand.c
   74 ./binary-search.c
   50 ./reverse.c
   11 ./c_integer_promotion.c
   10 ./null-pointer.c
   18 ./isdigit.c
    8 ./support.c
   39 ./switch.c
   12 ./puts.c
   22 ./c_2.7_atoi.c
   33 ./recursive.c
 1369 total
-----------------------------------
find . -name '*.cpp' | xargs wc -l > cat >> README.md
-----------------------------------
 11 ./main.cpp
  7 ./hello.cpp
  9 ./factorial.cpp
 27 total
-----------------------------------
find . -name 'Makefile' | xargs wc -l > cat >> README.md
-----------------------------------
17 ./Makefile
