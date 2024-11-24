#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;
const int inf=1e6;

int board[1005][1005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int w,h,n,cnt=0;
    cin >> w >> h >> n;
    while(n--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        for(int i=b;i<=d;i++){
            board[i][a]++;
            board[i][c+1]++;
        }

    }
    for(int i=0;i<=h+1;i++){
        for(int j=0;j<=w+1;j++){
            cnt+=board[i][j];
            board[i][j]=cnt%2;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){;
            cout << board[i][j];
        }
        newline
    }
    return 0;
}
