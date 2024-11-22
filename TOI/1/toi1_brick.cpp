#include <bits/stdc++.h>
#define newline cout << '\n';
using namespace std;
using ll=long long;

string board[50];
int arr[50];

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++) cin >> board[i];
    for(int i=0;i<m;i++) cin >> arr[i];
    for(int j=0;j<m;j++){
        while(arr[j]--){
            if(board[0][j]=='O' || board[0][j]=='#') continue;
            for(int i=0;i<n;i++){
                if(i==n-1 && board[i][j]=='.') board[i][j]='#';
                else if(board[i+1][j]=='O' || board[i+1][j]=='#'){
                    board[i][j]='#';
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++) cout << board[i] << '\n';
    return 0;
}
