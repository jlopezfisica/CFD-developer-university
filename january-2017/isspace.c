#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 't';
    int var2 = ' ';

    if( isspace( var1 ) )
    {
       printf("var1 = |%c| is a white-space character \n", var1);
    }
    else
    {
       printf("var1 = |%c| is not a white-space character \n", var1);
    }

    if( isspace( var2 ) )
    {
       printf("var 2 = |%c| is a white-space character \n", var2);
    }
    else
    {
       printf("var 2 = |%c| is not a white-space character \n", var2);
    }

    return 0;
}
