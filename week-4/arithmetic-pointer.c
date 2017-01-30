#include <stdio.h>

const int MAX = 3;

int main () {

    int var[] = {10, 100, 200};
    int i, j, *ptr, *ptr2;

    ptr = var;

    for (i = 0; i < MAX; i++) {
        printf("Adress of var[%d] = %x\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);

        ptr++;
    }
    ptr2 = &var[MAX-1];
    for (j = MAX; j > 0; j--) {
        printf("Adress of var[%d] = %x\n", j-1, ptr2);
        printf("Value of var[%d] = %d\n", j-1, *ptr2);

        ptr2--;
    }
    return 0;
}

