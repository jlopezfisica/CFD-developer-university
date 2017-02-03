#include <stdio.h>
#include <math.h>

#define MAX 50

FILE *fp;
int main () {
    double y, x, i, a;

    a = 10;
    for (i = -MAX; i < MAX; i=i+1) {
        y = 0.25 * a * (i * i);
        printf("step : %lf parabola : %lf\n ", i, y);
        fp = fopen("parabola.txt", "a");
        fprintf(fp, "%lf\n", y);
        fclose(fp);
    }
   return 0;
}


