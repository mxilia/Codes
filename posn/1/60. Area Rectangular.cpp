#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int dp[1005][1005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int r,c;
    cin >> r >> c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin >> dp[i][j];
            dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int i,j,k,l;
        cin >> i >> j >> k >> l;
        i++,j++,k++,l++;
        cout << dp[k][l]+dp[i-1][j-1]-dp[k][j-1]-dp[i-1][l]; newline
    }
    return 0;
}