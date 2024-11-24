#include <stdio.h>
#define newline printf("\n");

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,i,j,k;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            //P
            for(j=0;j<n;j++){
                if(i==0) printf("*");
                else if(i==n/2) printf("*");
                else if(j==0) printf("*");
                else if(j==n-1 && i<=n/2) printf("*");
                else printf("-");
            }
            printf("-");
            //O
            for(j=0;j<n;j++){
                if(i==0) printf("*");
                else if(i==n-1) printf("*");
                else if(j==n-1) printf("*");
                else if(j==0) printf("*");
                else printf("-");
            }
            printf("-");
            //S
            for(j=0;j<n;j++){
                if(i==0) printf("*");
                else if(i==n-1) printf("*");
                else if(i==n/2) printf("*");
                else if(j==0 && i<=n/2) printf("*");
                else if(j==n-1 && i>n/2) printf("*");
                else printf("-");
            }
            printf("-");
            //N
            for(j=0;j<n;j++){
                if(j==n-1) printf("*");
                else if(j==0) printf("*");
                else if(j==i) printf("*");
                else printf("-");
            }
            newline
        }
    }
    return 0;
}
