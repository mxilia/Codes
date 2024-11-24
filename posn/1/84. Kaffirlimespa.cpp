#include <bits/stdc++.h>
#define newline cout << "\n";
#define ll long long
using namespace std;
ll a[1000],b[1000];
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    ll sum=0;
    for(int i=0;i<n;i++) sum+=a[i]*b[i];
    cout << sum;
    return 0;
}
