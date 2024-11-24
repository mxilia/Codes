#include <stdio.h>
#include <math.h>
#define newline printf("\n");

int main(){
    int n,k,i,cnt=0;
    int arr[1005];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
        if(arr[i]==k) cnt++;
    }
    newline
    printf("%d",cnt);
    return 0;
}
