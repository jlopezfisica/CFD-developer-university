#include <stdio.h>

main() {

    int myInt;
    int a = scanf("%d", &myInt);
    int b = 10;
    int c ;

    printf("the value of your number is: %d\n", myInt);
    printf("the value of b is: %d\n", b);

    if (myInt == b) {
        printf("your number is equal to b\n");
    }
    else {
        printf("your number is not equal to b\n");
    }
}

