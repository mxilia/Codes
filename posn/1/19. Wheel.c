#include <stdio.h>
#include <math.h>
#define newline printf("\n");

int arr[105];
int point[105];

int main(){
    int n,k,i,current=1,score;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        int cnt=0;
        scanf("%d",&score);
        while(cnt<score){
            if(current==n) current=1;
            else current++;
            if(arr[current]>0) cnt++;
        }
        if(!(i%k)) point[k]+=arr[current];
        else point[i%k]+=arr[current];
        arr[current]=0;
        while(arr[current]==0 && i<n){
            if(current==n) current=1;
            else current++;
        }
    }
    for(i=1;i<=k;i++){
        printf("%d\n",point[i]);
    }
    return 0;
}

/*
5 3
3
5
2
4
1
3
5
1
2
1
-
5 3
3 5 2 4 1 3 5 1 2 1
*/
