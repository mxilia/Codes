#include <stdio.h>

int sum,total;

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
        for(j=1;j<=i;j++){
            printf("%d",j);
            if(j!=i) printf("+");
        }
        total+=sum;
        printf("=%d\n",sum);
    }
    printf("Total=%d",total);
    return 0;
}
