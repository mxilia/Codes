#include <bits/stdc++.h>
#define newline cout << '\n';
using namespace std;
using ll=long long;
const int inf=1e9;

int a[305],mn=inf,mx;

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int l,h,r;
        cin >> l >> h >> r;
        for(int j=l;j<r;j++) a[j]=max(a[j],h);
        mn=min(mn,l), mx=max(mx,r);
    }
    for(int i=mn;i<=mx+1;i++){
        if(a[i]!=a[i-1]){
            cout << i << ' ' << a[i] << ' ';
        }
    }
    return 0;
}
