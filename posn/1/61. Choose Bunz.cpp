#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int dp[10005][10005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,r,k;
    cin >> n >> r >> k;
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        dp[i][0]=1;
        for(int j=1;j<=i;j++){
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%k;
        }
    }
    cout << dp[n][r];
    return 0;
}
