#include <stdio.h>
#include <math.h>
#define PIv acos(-1.0)
#define MAX 2000
#define MAX2 1400

FILE *fp;
int    var, istep;
double vel_u;
//double omegapul, tpul, taupul, npul;
double freq = 4000.0;
int period = 4000.0;
double npul = 2;
double tpul;
double cycle = 3;
int main() {

    for (istep = 0; istep < MAX2; istep=istep+1) {
    double taupul = 0.5;
    double omegapul = 1;
        if (istep < MAX-1300){
        tpul = (istep-335) * cycle * PIv / (MAX);
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fp  = fopen("pulse-cosine-exp-2.txt", "a");
        fprintf(fp, " %d %lf\n",  istep, vel_u);
       // omegapul = 1.1;
       // vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
       // fprintf(fp, " %lf",  vel_u);
       // omegapul = 0.8;
       // vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
       // fprintf(fp, " %lf",  vel_u);
       // omegapul = 0.6;
       // vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
       // fprintf(fp, " %lf\n",  vel_u);
        fclose(fp);
        }
        else {
        cycle=3;
        tpul = (istep-MAX-335+1300) * cycle * PIv / (MAX);
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fp  = fopen("pulse-cosine-exp-2.txt", "a");
        fprintf(fp, " %d %lf\n", istep,  vel_u);
        //omegapul = 1.1;
        //vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        //fprintf(fp, " %lf",  vel_u);
        //omegapul = 0.8;
        //vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        //fprintf(fp, " %lf",  vel_u);
        //omegapul = 0.6;
        //vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        //fprintf(fp, " %lf\n",  vel_u);
        fclose(fp);
        }
    }
        return 0;
}

