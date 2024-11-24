#include <bits/stdc++.h>
#define newline cout << "\n";
#define inf 1e6+7
using namespace std;
long long a[200005];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,mx=INT_MIN,cs,ce,s,e;
    cin >> n;
    a[0]=INT_MIN;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1]+a[i]) cs=i,ce=i;
        else {
            a[i]=a[i-1]+a[i];
            ce=i;
        }
        if(a[i]>mx){
            mx=a[i];
            s=cs;
            e=ce;
        }
    }
    cout << s << " " << e;
    newline
    cout << mx;
    return 0;
}
