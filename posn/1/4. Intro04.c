#include <stdio.h>
#include <math.h>

int main(){
    double d,vr,vt,vf;
    scanf("%lf %lf %lf %lf",&d,&vr,&vt,&vf);
    printf("%.2lf",(d/(vt-vr)*vf));
    return 0;
}
