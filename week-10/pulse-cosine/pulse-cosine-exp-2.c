#include <stdio.h>
#include <math.h>
#define PIv acos(-1.0)
#define MAX 2000
#define MAX2 4000

FILE *fp;
int    var, istep;
double vel_u;
//double omegapul, tpul, taupul, npul;
double freq = 4000.0;
int period = 4000.0;
double npul = 2;
double tpul;
double cycle = 6;
int main() {

    for (istep = 0; istep < MAX2; istep=istep+1) {
    double taupul = 0.5;
    double omegapul = 1;
        if (istep < MAX){
        tpul = istep * cycle * PIv / (MAX);
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        printf("%lf\n", vel_u);
        fp  = fopen("pulse-cosine-exp-2.txt", "a");
        fprintf(fp, "%d %lf", istep, vel_u);
        taupul = 0.4;
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fprintf(fp, " %lf",  vel_u);
        //fp  = fopen("pulse-cosine-exp-1.txt", "a");
        omegapul = 1.1;
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fprintf(fp, " %lf",  vel_u);
        omegapul = 0.8;
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fprintf(fp, " %lf",  vel_u);
        omegapul = 0.6;
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fprintf(fp, " %lf\n",  vel_u);
        fclose(fp);
        }
        else {
        tpul = (istep-MAX)* cycle *PIv / (MAX);
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fp  = fopen("pulse-cosine-exp-2.txt", "a");
        fprintf(fp, "%d %lf", istep, vel_u);
        taupul = 0.4;
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        //fp  = fopen("pulse-cosine-exp-1.txt", "a");
        fprintf(fp, " %lf",  vel_u);
        omegapul = 1.1;
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fprintf(fp, " %lf",  vel_u);
        omegapul = 0.8;
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fprintf(fp, " %lf",  vel_u);
        omegapul = 0.6;
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fprintf(fp, " %lf\n",  vel_u);
        fclose(fp);
        }
    }
        return 0;
}

