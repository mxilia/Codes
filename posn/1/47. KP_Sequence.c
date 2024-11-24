#include <stdio.h>
#include <string.h>

int n,k,p,q,cnt;
int ans[150];

void dfs(int idx,int current){
    int i;
    if(idx==n){
        cnt++;
        if(p<=cnt && cnt<=q){
            for(i=0;i<idx;i++){
                printf("%d ",ans[i]);
            }
            printf("\n");
        }
        return;
    }
    for(i=current;i<=current+k;i++){
        ans[idx]=i;
        dfs(idx+1,i);
    }
    return;
}

int main(){
    scanf("%d %d %d %d",&n,&k,&p,&q);
    dfs(0,0);
    return 0;
}
