#include <stdio.h>

main() {

    int a = 21;
    int b2 = 22;
    int b3 = 33;
    int b = 10;
    int c;

    c = a % b;
    printf("21 % 10 %d\n", c);

    c = b2 % b;
    printf("22 % 10 %d\n", c);

    c = b3 % b;
    printf("33 % 10 %d\n", c);

    c = b-- ;
    printf("10-- %d\n", c);

    c = b++ ;
    printf("10++ %d\n", c);

}

