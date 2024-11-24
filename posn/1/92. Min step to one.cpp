#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;
const int n=1000005;
int dp[n];

int main(){
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+1;
        if(i%2==0) dp[i]=min(dp[i],dp[i/2]+1);
        if(i%3==0) dp[i]=min(dp[i],dp[i/3]+1);
    }
    int q;
    cin >> q;
    while(q--){
        int p;
        cin >> p;
        cout << dp[p];
        newline
    }
    return 0;
}
