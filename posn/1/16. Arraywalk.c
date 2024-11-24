#include <stdio.h>
#include <math.h>
#define newline printf("\n");

int main(){
    int n,m,i,j;
    int arr[25][25];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
    }
    newline
    for(i=n-1;i>=0;i--){
        for(j=m-1;j>=0;j--){
            printf("%d ",arr[i][j]);
        }
    }
    newline
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
    }
    newline
    for(i=m-1;i>=0;i--){
        for(j=n-1;j>=0;j--){
            printf("%d ",arr[j][i]);
        }
    }
    return 0;
}
