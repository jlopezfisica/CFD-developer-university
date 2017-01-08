#include <stdio.h>

int main()
{
    int var = 20;
    int *ip;

    ip = &var;
    printf("Adress var: %x\n", &var);
    printf("Adress of ip: %x\n", ip);

    printf("value of *ip: %d\n", *ip);
    return 0;
}
