#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define newline printf("\n");

int arr[35][35];

int main(){
    int t,h,w,i,j,si,sj;
    scanf("%d",&t);
    while(t--){
        int mx=INT_MIN;
        scanf("%d %d",&h,&w);
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(i=0;i<h;i++){
            for(j=0;j<w;j++){
                if(i+1<h && (arr[i][j]+arr[i+1][j])>mx && abs(arr[i][j]-arr[i+1][j])<=10){
                    mx=arr[i][j]+arr[i+1][j];
                    si=i;
                    sj=j;
                }
                if(j+1<w && (arr[i][j]+arr[i][j+1])>mx && abs(arr[i][j]-arr[i][j+1])<=10){
                    mx=arr[i][j]+arr[i][j+1];
                    si=i;
                    sj=j;
                }
            }
        }
        printf("%d %d\n",si+1,sj+1);
    }
    return 0;
}