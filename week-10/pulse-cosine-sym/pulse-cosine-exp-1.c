#include <stdio.h>
#include <math.h>
#define PIv acos(-1.0)
#define MAX 2000
#define MAX2 2000

FILE *fp;
int    var, istep;
double vel_u;
//double omegapul, tpul, taupul, npul;
double freq = 4000.0;
int period = 4000.0;
double npul = 2;
double tpul;
double cycle = 2;
int main() {

    for (istep = 0; istep < MAX2; istep=istep+1) {
    double taupul = 0.5;
    double omegapul = 1;
        if (istep < MAX-1000){
        cycle=2;
        tpul = (istep-500) * cycle * PIv / (MAX);
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        //printf("%lf", vel_u);
        fp  = fopen("pulse-cosine-exp-1.txt", "a");
        fprintf(fp, "%d %lf\n", istep, vel_u);
       // cycle=3;
       // tpul = (istep-350) * cycle * PIv / (MAX);
       // vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
       // fprintf(fp, " %lf\n",  vel_u);
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
        cycle=2;
        tpul = (istep-MAX+500)* cycle *PIv / (MAX);
        vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
        fp  = fopen("pulse-cosine-exp-1.txt", "a");
        fprintf(fp, "%d %lf\n", istep, vel_u);
       // cycle=3;
       // tpul = (istep-MAX+200) * cycle * PIv / (MAX);
       // vel_u = (cos(omegapul * tpul) * exp (-tpul * taupul)) / npul;
       // //fp  = fopen("pulse-cosine-exp-1.txt", "a");
       // fprintf(fp, " %lf\n",  vel_u);
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

