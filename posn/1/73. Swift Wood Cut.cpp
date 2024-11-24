#include <bits/stdc++.h>
#define newline cout << "\n";
#define ll long long
using namespace std;
const ll mx=2e9;

ll tree[2000005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll a,b;
    cin >> a >> b;
    for(int i=0;i<a;i++) cin >> tree[i];
    ll l=0,r=mx;
    while(l<r){
        ll mid=(l+r)/2;
        ll sum=0;
        for(int i=0;i<a;i++){
            ll z=tree[i]-mid;
            if(z<0) z=0;
            sum+=z;
        }
        if(sum>=b) l=mid+1;
        else r=mid;
    }
    cout << l-1;
    return 0;
}
