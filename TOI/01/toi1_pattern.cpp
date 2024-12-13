#include <bits/stdc++.h>
#define newline cout << '\n';
using namespace std;
using ll=long long;
const int mxw=70;
int board[500005][705],mxh;

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        int p,q,r;
        cin >> p >> q >> r;
        board[p][q]+=1;
        board[p][min(mxw+1,q+r)]+=-1;
        mxh=max(mxh,p);
    }
    for(int i=1;i<=mxh;i++){
        for(int j=1;j<=mxw;j++){
            board[i][j]+=board[i][j-1];
            if(board[i][j]) cout << 'x';
            else cout << 'o';
        }
        newline
    }
    return 0;
}
