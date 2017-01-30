#include <stdio.h>

int main()
{
    int i, var;
    #define MAXSTEPS 10000
    #define period 5
    #define freq 5
     for (i = 0; i < MAXSTEPS; i++) {
         var = i % 1000;
        if ( var >= 0 && var <= 150){
            printf("%d\n", (i));
        }
        else {
            printf("no\n");
        }
     }
}
