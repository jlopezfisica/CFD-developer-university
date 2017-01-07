#include <stdio.h>

main() {

    unsigned int a = 60; /* 60 = 0011 1100 */
    unsigned int b = 13; /* 13 = 0000 1101 */
    unsigned int c = 22; /* 22 = 0001 0110 */
    int d = 0;


    printf("The value of a is %d\n", a);
    printf("The binary of a is 0011 1100 \n");
    printf("The value of b is %d\n", b);
    printf("The binary of b is 0000 1101 \n" );
    printf("The value of c is %d\n", c);
    printf("The binary of c is 0001 0110 \n" );

    d = a & b;  /* 12 = 0000 1100 */
    printf("The value of a & b is %d\n", d);

    d = a & c;
    printf("The value of a & c is %d\n", d);

    d = a | b;
    printf("The value of a | b is %d\n", d);

    d = a | c;
    printf("The value of a | c is %d\n", d);

}
