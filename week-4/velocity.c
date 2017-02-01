#include <stdio.h>
#include <math.h>

#define PIv acos(-1.0)
#define MAX 2000
FILE *fp;
int main() {
    double omega, time, tau, vel, i;

    omega = 1;
    tau = 0.5 / PIv;

    for (i = 0; i < MAX; i=i+1) {
        time = i*4*PIv / (MAX);
        vel = cos(omega * time) * exp(-time * tau);
        printf("The value of time is : %lf velocity is: %lf \n", time, vel);
        fp  = fopen("text.txt", "a");
        fprintf(fp, "%lf\n", vel);
        fclose(fp);

    }
        return 0;
}

