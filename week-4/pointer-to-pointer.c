#include <stdio.h>

int main() {
    int var;
    int *ptr;
    int **pptr;

    var =  3000;

    ptr = &var;
    pptr = &ptr;

    printf("Value of var = %d\n", var);
    printf("Value of *ptr = %d\n", *ptr);
    printf("Value of **pptr = %d\n", **pptr);
    return 0;
}


