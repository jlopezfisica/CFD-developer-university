#include <stdio.h>

int main() {
    int var = 20;
    int *ip;

    ip = &var;

    printf("Adress of variable: %x\n", &var);
    printf("Adress stored in ip variable: %x\n", &var);

    printf("Value of *ip variable: %d\n", *ip);
    return 0;
}

