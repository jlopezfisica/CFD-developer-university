#include <stdio.h>

int main()
{
    int i;
    #define MAXSTEPS 10000
    #define period 5
    #define freq 5
     for (i = 0; i < MAXSTEPS; i++) {
        if ((i / period) % freq == 0){
            printf("%d\n", (i));
        }
    }

    printf(" %d\n", (10/2) % 5);
    printf(" %d\n", (5/2) % 4);
    printf(" %d\n", (3/2000) % 5);
    printf(" %d\n", (3000/2000) % 5);

}
