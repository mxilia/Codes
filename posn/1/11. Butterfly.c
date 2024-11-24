#include <stdio.h>
#define newline printf("\n");

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<((n*2)-1)/2+1;i++){
        for(j=0;j<(n*2)-1;j++){
            if(j>i && j<(n*2)-2-i) printf("-");
            else printf("*");
        }
        newline
    }
    for(i=((n*2)-1)/2-1;i>=0;i--){
        for(j=0;j<(n*2)-1;j++){
            if(j>i && j<(n*2)-2-i) printf("-");
            else printf("*");
        }
        newline
    }
    return 0;
}
