#include <stdio.h>
#include <math.h>

#define MAX_1 100

FILE *fp;
int main () {
    double y, MAX, x, i, a, h, k, p;

    a =1;
    MAX = 100;
    k = 0;
    h = 0;
    p = 100;
    a = +.1;
    for (i = -MAX; i <= (MAX); i=i+1) {
        y =  (((i-h)*(i-h) / (10*p)) + k) * 0.1 ;
        printf("step : %lf parabola : %lf\n ", i, y);
        fp = fopen("data-parabola.txt", "a");
        fprintf(fp, "%lf \n",  (y-1));
        fclose(fp);
    }
   return 0;
}


