#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int n,k;
int a[12];

bool play(int idx,int current){
    if(idx==n){
        if(current==k) return true;
        else return false;
    }
    if(play(idx+1,current/a[idx])) return true;
    if(play(idx+1,current*a[idx])) return true;
    if(play(idx+1,current-a[idx])) return true;
    if(play(idx+1,current+a[idx])) return true;
    return false;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        cin >> n >> k;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        if(play(1,a[0])) cout << "YES";
        else cout << "NO";
        newline
    }
    return 0;
}
