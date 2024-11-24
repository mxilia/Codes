#include <stdio.h>
#include <math.h>

int main(){
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    double b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    double c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    double s=(a+b+c)/2;
    double area=sqrt(s*(s-a)*(s-b)*(s-c));
    double i=sqrt(4*area/sqrt(3));
    double j=i/2;
    double k=area/j;
    printf("%.2lf %.2lf %.2lf",i,j,k);
    return 0;
}
