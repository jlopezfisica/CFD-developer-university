#include <stdio.h>
#include <string.h>

int main()
{
    char str[40];
    int  myInt;

    printf("Give me a number: \n");
    int  a = scanf("%d", &myInt);
    printf("This is your number: %d\n", myInt);

    strcpy(str, "This is a string &*&*");
    puts(str);

    printf("give me a character: \n");

    char myChar[20];
    int b = scanf("%s", myChar);

    printf("this is your char %s\n", myChar);
    printf("The memset your character n-times your number before the string\n");

    memset(str,  'b', myInt);
    puts(str);

    return(0);
}

