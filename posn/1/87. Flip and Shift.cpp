#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int z; cin >> z;
            if(z){
                if(i%2) odd++;
                else even++;
            }
        }
        if(n%2){
            cout << "YES";
            newline
            continue;
        }
        if(abs(even-odd)>1) cout << "NO";
        else cout << "YES";
        newline
    }
    return 0;
}
