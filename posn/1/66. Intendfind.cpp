#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int arr[100005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,q;
    cin >> n >> q;
    for(int i=1;i<=n;i++) cin >> arr[i];
    arr[n+1]=INT_MAX;
    sort(arr,arr+n+2);
    while(q--){
        int p;
        cin >> p;
        int l=0,r=n+1;
        while(l<r){
            int mid=(l+r)/2;
            if(arr[mid]>p) r=mid;
            else l=mid+1;
        }
        cout << l-1; newline
    }
    return 0;
}