#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;
const int inf=1e6;

bool flag[1005][1005];
int board[1005][1005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int x,y,k;
    cin >> x >> y >> k;
    x++; y++;
    while(k--){
        int a,b;
        cin >> a >> b;
        a++;
        flag[y-b][a]=1;
    }
    for(int i=y;i>=1;i--){
        if(flag[i][1]) break;
        board[i][1]=1;
    }
    for(int j=1;j<=x;j++){
        if(flag[y][j]) break;
        board[y][j]=1;
    }
    for(int i=y-1;i>=1;i--){
        for(int j=2;j<=x;j++){
            int l=0,d=0;
            if(flag[i][j]) continue;
            if(!flag[i][j-1]) l=board[i][j-1];
            if(!flag[i+1][j]) d=board[i+1][j];
            board[i][j]+=(l+d)%inf;
        }
    }
    cout << board[1][x];
    return 0;
}
