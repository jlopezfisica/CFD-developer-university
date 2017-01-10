### The second week of the year!

This week is going slowly in my exercises, however I am doing hard work in 
the C code from my master thesis. 

#### The standard library as presented in The C programming language book 

The functions, types and macros of the standard library are declared in 
standard __headers__:
```c
<assert.h>   <float.h>   <math.h>   <stdarg.h>   <stdlib.h>
<ctype.h>    <limits.h>  <setjmp.h> <stddef.h>   <string.h>
<errno.h>    <locale.h>  <signal.h> <stdio.h>    <time.h>
```
A header can be accessed by
```c
#include <header> 
```

When the preprocessing of the C program is completed, the program is reduced
to a sequence of tokens. 

There are six classes of tokens: identifiers, keywords, constants, string 
literals, operators, and other separators. 

#### keywords in C
```c
auto    double    int    struct
break   else      long   switch
case    enum      register  typedef
char    extern    return union
const   float     short  unsigned
continue for      signed void
default goto      sizeof volatile
do      if        static while
```
However depending your type of job, you will be using a part of this set.   

