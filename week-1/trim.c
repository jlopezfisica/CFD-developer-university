#include <stdio.h>
#include <ctype.h>

void trim_both(char *, char *);

int main (void)
{
    char title[100] = "   My   long   string    ";
    char title_t[100] = "";

    (void) printf("String before left trim is:[%s]\n", title);
    trim_both(title, title_t);
    (void) printf("String after left trim is:[%s]\n", title_t);
}

void trim_both(char *title_p, char *title_tp) {
    int flag = 0;

    while(*title_p) {
        if(!isspace((unsigned char) *title_p) && flag == 0) {
            *title_tp++ = *title_p;
            flag = 1;
        }
        title_p++;
        if(flag == 1) {
            *title_tp++ = *title_p;
        }
    }

    while(1) {
        title_tp--;
        if(!isspace((unsigned char) *title_tp) && flag == 0) {
            break;
        }
        flag = 0;
        *title_tp = '\0';
    }
}
