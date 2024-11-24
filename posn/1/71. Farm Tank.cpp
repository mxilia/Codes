#include <bits/stdc++.h>
#define newline cout << "\n";
#define ll long long
using namespace std;
const ll mx=1e15+7;

int player[100005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> player[i];
    ll l=0,r=mx;
    while(l<r){
        ll mid=(l+r)/2;
        ll sum=0;
        for(int i=1;i<=n;i++){
            sum+=mid/player[i];
        }
        if(sum<m) l=mid+1;
        else r=mid;
    }
    cout << l;
    return 0;
}
