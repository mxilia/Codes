#include <stdio.h>
#include <math.h>
#include <limits.h>
#define newline printf("\n");

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int a,b,c,d,min,max;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b) max=a,min=b;
        else max=b,min=a;
        int c1=(a*c)+(b*c);
        int c2;
        if((max-min)%2==0) c2=(min*d)+(max-min)*d;
        else c2=(min*d)+(max-min-1)*d+c;
        int c3=(min*d)+(c*(max-min));
        if(c1>c2) c1=c2;
        if(c1>c3) c1=c3;
        printf("%d\n",c1);
    }
    return 0;
}
