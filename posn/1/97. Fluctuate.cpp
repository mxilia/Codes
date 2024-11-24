#include <bits/stdc++.h>
#define newline cout << "\n";
#define inf 1e6+7
using namespace std;

int main(){
    int n,mx=0,mn=inf;
    cin >> n;
    while(n--){
        int z;
        cin >> z;
        mn=min(mn,z);
        mx=max(mx,z-mn);
    }
    cout << mx;
    return 0;
}
