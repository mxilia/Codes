#include <bits/stdc++.h>
#define newline cout << "\n";
#define ll long long
using namespace std;

int a[2005];

int main(){
    int n,k,sum=0;
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i+=k) sum+=a[i];
    cout << sum;
    return 0;
}
