#include <stdio.h>
#include <math.h>
#define newline printf("\n");

int main(){
    int n1,m1,n2,m2,i,j,k;
    scanf("%d %d %d %d",&n1,&m1,&n2,&m2);
    int A[15][15],B[15][15];
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    if(m1!=n2){
        printf("Can't Multiply.");
        return 0;
    }
    for(i=0;i<n1;i++){
        for(j=0;j<m2;j++){
            int sum=0;
            for(k=0;k<m1;k++){
                sum+=A[i][k]*B[k][j];
            }
            printf("%d ",sum);
        }
        newline
    }
    return 0;
}
