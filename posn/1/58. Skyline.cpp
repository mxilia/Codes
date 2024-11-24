#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int dp[300];

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int s,e,h;
        cin >> s >> h >> e;
        for(int j=s;j<e;j++){
            dp[j]=max(dp[j],h);
        }
    }
    for(int i=1;i<=300;i++){
        if(dp[i]!=dp[i-1]){
            cout << i << " " << dp[i] << " ";
        }
    }
    return 0;
}
