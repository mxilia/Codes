#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

struct A
{
    int x,y;
    bool operator<(const A &o)const{
        if(x==o.x) return y>o.y;
        return x<o.x;
    }
};

A arr[100005];

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> arr[i].x >> arr[i].y;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout << arr[i].x << " " << arr[i].y;
        newline
    }
    return 0;
}
