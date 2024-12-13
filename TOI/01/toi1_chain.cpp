#include <bits/stdc++.h>
#define newline cout << '\n';
using namespace std;
using ll=long long;

int l,n;
string s[30005];

bool ok(int j,int k){
    int mx=0,cnt=0;
    for(int i=0;i<l;i++){
        if(s[j][i]!=s[k][i]) cnt++;
        if(cnt>=3) return 0;
    }
    return 1;
}

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> l >> n;
    for(int i=0;i<n;i++) cin >> s[i];
    for(int i=0;i<n;i++){
        if(!ok(i,i+1)){
            cout << s[i];
            break;
        }
    }
    return 0;
}
