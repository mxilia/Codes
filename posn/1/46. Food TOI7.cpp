#include <bits/stdc++.h>
#define newline cout << "\n";
#define inf 1e7+3
using namespace std;

int n,m;
int flag[15];
int nofirst[15];
int ans[15];

void dfs(int cnt){
    int i,j;
    if(cnt==n){
        for(i=1;i<=n;i++){
            printf("%d ",ans[i]);
        }
        cout << "\n";
        return;
    }
    for(i=1;i<=n;i++){
        if(!flag[i] && !(nofirst[i] && cnt==0)){
            flag[i]=1;
            ans[cnt+1]=i;
            dfs(cnt+1);
            flag[i]=0;
        }
    }
    return;
}

int main(){
    cin >> n >> m;
    while(m--){
        int z; cin >> z;
        nofirst[z]=1;
    }
    dfs(0);
    return 0;
}
