#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define newline printf("\n");

int arr[105];

int main(){
    int n,i,mxi=INT_MIN,mxj=INT_MIN;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int z;
        scanf("%d",&z);
        arr[z]++;
        if(arr[z]>mxi) mxi=arr[z];
        if(z>mxj)mxj=z;
    }
    for(int i=0;i<mxi;i++){
        for(int j=1;j<=mxj;j++){
            if(mxi-i<=arr[j]) printf("*");
            else printf(".");
        }
        newline
    }
    return 0;
}