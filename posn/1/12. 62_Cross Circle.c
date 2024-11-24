#include <stdio.h>
#define newline printf("\n");

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        double h1,k1,r1,h2,k2,r2,mx,mn;
        scanf("%lf %lf %lf %lf %lf %lf",&h1,&k1,&r1,&h2,&k2,&r2);
        double dist=sqrt((h1-h2)*(h1-h2)+(k1-k2)*(k1-k2));
        if(dist>r1+r2){
            printf("None");
        }
        else if(dist==r1+r2){
            printf("One");
        }
        else if(dist<r1+r2){
            if(r1>r2) mn=r2,mx=r1;
            else mn=r1,mx=r2;
            if(dist==0){
                if(mn==mx) printf("More");
                else printf("None");
            }
            else {
                if(mn+dist<mx) printf("None");
                else if(mn+dist==mx) printf("One");
                else printf("More");
            }
        }
    }
    return 0;
}