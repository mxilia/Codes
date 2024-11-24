#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int dp[100005];

int main(){
    int n,m;
    cin >> n >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        dp[a]++;
        dp[b+1]--;
    }
    for(int i=1;i<=n;i++) dp[i]+=dp[i-1];
    int q;
    cin >> q;
    while(q--){
        int k;
        cin >> k;
        cout << dp[k] << endl;
    }
    return 0;
}
