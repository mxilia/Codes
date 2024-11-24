#include <stdio.h>

int n,i;

int main(){
    int X,Y,Z,d0,d1,d2,d3;
    double vx,vy,vz,ans=2e9;
    scanf("%d %d %d",&X,&Y,&Z);
    scanf("%d %d %d %d",&d0,&d1,&d2,&d3);
    scanf("%d",&n);
    int x=(X+d0-d1)/2;
    int y=(Y+d0-d2)/2;
    int z=(Z+d0-d3)/2;
    for(i=0;i<n;i++){
        scanf("%lf %lf %lf",&vx,&vy,&vz);
        double t=(x/vx+y/vy+z/vz)*2.0;
        if(t<ans) ans=t;
    }
    printf("%d %d %d\n%d",x,y,z,(int)ans);
    return 0;
}
