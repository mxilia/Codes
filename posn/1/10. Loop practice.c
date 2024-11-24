#include <stdio.h>
#define newline printf("\n");

int main(){
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++) printf("%d ",i);
    newline
    i--;
    while(i>=1){
        printf("%d ",i);
        i--;
    }
    newline
    do{
        i+=1;
        if(!(i%2)) printf("%d ",i);

    }
    while(i<n);
    newline
    i=n;
    for(i;i>=1;i--){
        if(!(i%2)) printf("%d ",i);
    }
    newline
    i=1;
    while(i<=n){
        printf("%d ",i);
        i+=2;
    }
    newline
    do{
        i-=2;
        printf("%d ",i);
    }
    while(i>=3);
    return 0;
}
