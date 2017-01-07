#include <stdio.h>
#include <string.h>

int main()
{
    char src[40];
    char dest[100];

    memset(dest, '0', sizeof(dest));
    strcpy(src, "This is my string .....");
    strcpy(dest, src);

    printf("Final copied string is: |%s|\n", dest);

    return 0;
}
