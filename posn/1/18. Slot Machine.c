#include <stdio.h>
#include <math.h>
#define newline printf("\n");
int cmb[9][5];
int main(){
    int n,i,j,k,l,m,cnt=0;
    int arr[20][5];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
            cmb[arr[i][j]-1][j]++;
        }
    }
    for(i=0;i<9;i++){
        int mul=1;
        for(j=0;j<5;j++){
            mul*=cmb[i][j];
        }
        cnt+=mul;
    }
    printf("%d\n",cnt);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                for(l=0;l<n;l++){
                    for(m=0;m<n;m++){
                        if(arr[i][0]==arr[j][1] && arr[j][1]==arr[k][2] && arr[k][2]==arr[l][3] && arr[l][3]==arr[m][4]){
                            printf("%d %d %d %d %d\n",i+1,j+1,k+1,l+1,m+1);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
