#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int n,r,k,pos;
int ans[15],flag[15];

void play(int idx,int cnt){
    if(cnt==r){
        pos++;
        if(pos==k){
            for(int i=0;i<r;i++){
                cout << ans[i] << " ";
            }
            exit(0);
        }
        else return;
    }
    for(int i=idx;i<=n;i++){
        if(!flag[i]){
            ans[cnt]=i;
            flag[i]=1;
            play(i+1,cnt+1);
            flag[i]=0;
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> r >> k;
    play(1,0);
    return 0;
}
