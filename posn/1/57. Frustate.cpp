#include <bits/stdc++.h>
using namespace std;

int a[100005];
int dp[100005];

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        dp[i]=dp[i-1]+a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int s,e;
        cin >> s >> e;
        cout << dp[e]-dp[s-1] << endl;
    }
    return 0;
}
