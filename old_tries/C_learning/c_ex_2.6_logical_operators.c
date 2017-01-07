#include <stdio.h>

main()
{

    int  a ;
    int  b ;
    int  c ;
    int  d ;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    printf("Enter the number c: ");
    scanf("%d", &c);
    printf("\n");


    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n\n", c);

    if ( a && b ) {
        printf("(a && b) is true \n");
    }
    else {
        printf("(a && b) is false \n");
    }

    if (!(a && b)) {
        printf("!(a && b) is true \n");
    }
    else {
        printf("!(a && b) is false \n");
    }


    if ( a && b && c) {
        printf("(a && b && c) is true \n");
    }
    else {
        printf("(a && b && c) is not true \n");
    }


    if (!( a && b && c)) {
        printf("!(a && b && c) is true \n");
    }
    else {
        printf("!(a && b && c) is not true \n");
    }

    if (a || b) {
        printf("(a || b) is true \n");
    }
    else {
        printf("(a || b) is not true \n");
    }

    if (!(a || b)) {
        printf("!(a || b) is true \n");
    }
    else {
        printf("!(a || b) is not true \n");
    }

}
