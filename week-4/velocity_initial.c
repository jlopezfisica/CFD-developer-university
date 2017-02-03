#include <stdio.h>
#include <math.h>

#define PIv acos(-1.0)
#define MAX 2000
#define MAX2 2000

FILE *fp;
int main() {
    double omega, time, tau, vel, i, vel2, time2;

    omega = 1;
    tau = 0.5 / PIv;

    for (i = 0; i < 4000; i=i+1) {
        if (i < 2000){
        time = i*10*PIv / (MAX);
        vel = cos(omega * time) * exp(-time * tau);
        time2 = i*8*PIv / (MAX2);
        vel2 = cos(omega * time2) * exp(-time2 * tau);
        printf("%lf velocity is: %lf ", i, vel);
        printf("%lf velocity2 is: %lf \n", time, vel2);
        fp  = fopen("text.txt", "a");
        fprintf(fp, "%lf\n", vel);
        fclose(fp);
        }
        else {
        time = (i-2000)*10*PIv / (MAX);
        vel = cos(omega * time) * exp(-time * tau);
        fp  = fopen("text.txt", "a");
        fprintf(fp, "%lf\n", vel);
        fclose(fp);
        }
    }
        return 0;
}

