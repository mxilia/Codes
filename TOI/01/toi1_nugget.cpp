#include <bits/stdc++.h>
#define newline cout << '\n';
using namespace std;
using ll=long long;

int dp[105],ch;

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    dp[6]=dp[9]=dp[20]=1;
    for(int i=6;i<=100;i++){
        if(!dp[i]) dp[i]=max({dp[max(0,i-6)],dp[max(0,i-9)],dp[max(0,i-20)]});
        if(dp[i] && i<=n) cout << i << '\n', ch=1;
    }
    if(!ch) cout << "no";
    return 0;
}
