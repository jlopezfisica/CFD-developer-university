#include<stdio.h>

int main() {
    int c, nl, nt, ns;
    nl = 0;
    nt = 0;
    ns = 0;
    printf("Enter the characters and press ctrl-d \n");
    while ((c = getchar()) !=EOF)  {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
}

/* after entering the sentence of characters press ctrl-D*/

