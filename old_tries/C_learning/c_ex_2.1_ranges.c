/* Determine the ranges of char, short, int, long, etc. */

#include <stdio.h>

int main(void)
{
    printf("Minimum Signed Char %d\n", -(char) ((unsigned char) ~0 >> 1) - 1);
    printf("Maximum Signed Char %d\n",  (char) ((unsigned char) ~0 >> 1));

    printf("Maximum Unsigned Char %d\n", (unsigned char) ~ 0);

    return 0;
}
