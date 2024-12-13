#include <bits/stdc++.h>
#define newline cout << '\n';
using namespace std;
using ll=long long;
const int inf=1e9;

int arr[5005],dp[5005],mx=-inf,idx,jdx,cnt;

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> arr[i];
    for(int i=1;i<=n;i++){
        if(dp[i-1]<=0) dp[i]=arr[i],cnt=1;
        else dp[i]=arr[i]+dp[i-1],cnt++;
        if(dp[i]>mx){
            mx=dp[i];
            idx=i-cnt+1;
            jdx=i;
        }
    }
    if(mx<=0){
        cout << "Empty sequence";
        return 0;
    }
    for(int i=idx;i<=jdx;i++) cout << arr[i] << ' ';
    cout << '\n' << mx;
    return 0;
}
