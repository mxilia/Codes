#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;
int dp[100500];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> dp[i];
            dp[i]+=dp[i-1];
        }
        int l=1,r=n;
        while(l<r){
            int mid=(l+r)/2;
            //cout << mid; newline
            if(dp[n]-dp[mid]>dp[mid]) l=mid+1;
            else r=mid;
        }
        if(dp[n]-dp[l]==dp[l]){
            cout << l;
            newline;
        }
        else {
            cout << "NO";
            newline
        }
    }
    return 0;
}