#include <stdio.h>
#include <string.h>
#include <math.h>
#define test printf("Pass\n");

int main(){
    int q,i,j;
    scanf("%d",&q);
    while(q--){
        int z;
        scanf("%d",&z);
        int cnt=0,sum=0;
        int prevsum=0;
        while(1){
            if(sum>z){
                break;
            }
            cnt++;
            sum+=cnt;
        }
        for(i=1;i<=cnt;i++){
            for(j=1;j<=cnt;j++){
                if(i>=j) printf("*");
                else printf("-");
            }
            printf("\n");
        }
        return 0;
    }
}
