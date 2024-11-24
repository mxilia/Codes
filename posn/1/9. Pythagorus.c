#include <stdio.h>

int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(c==0) printf("%.2lf",sqrt(a*a+b*b));
    else if(b==0) printf("%.2lf",sqrt(c*c-a*a));
    else if(a==0) printf("%.2lf",sqrt(c*c-b*b));
    return 0;
}
