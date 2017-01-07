#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;

    /* initial memory allocation */
    str = (char *) malloc(15);
    strcpy(str, "Hola mundo");
    printf("string = %s, address = %u\n", str, str);

    /* reallocating memory */
    str = (char *) malloc(15);
    strcpy(str, "Hola");
    printf("string = %s, address = %u\n", str, str);

    free(str);

    return(0);
}
