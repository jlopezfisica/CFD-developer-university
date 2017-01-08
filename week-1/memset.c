#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    strcpy(str, "This is my string 1 2 3 4 5 6....");
    puts(str);

    memset(str, '$', 7);
    puts(str);

    return 0;
}
