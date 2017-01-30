#include <stdio.h>

const int MAX = 3;

int main () {
    int var[] = {10, 100, 300};
    int i, *ptr[MAX];

    for (i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }

    for (i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }

    for (i = 0; i < MAX; i++) {
        printf("Value of var[%d] = %d\n", i, *ptr[i] );
        printf("Value of address var[%d] = %x\n", i, ptr[i] );
    }
    return 0;
}

