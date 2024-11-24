#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int n,r,k,pos;
int ans[15],flag[15];

void dfs(int cnt){
    int i,j;
    if(cnt==r) pos++;
    if(pos==k){
        for(i=1;i<=r;i++){
            printf("%d ",ans[i]);
        }
        exit(0);
    }
    for(i=1;i<=n;i++){
        if(!flag[i]){
            flag[i]=1;
            ans[cnt+1]=i;
            dfs(cnt+1);
            flag[i]=0;
        }
    }
    return;
}
int main(){
    scanf("%d %d %d",&n,&r,&k);
    dfs(0);
    return 0;
}
