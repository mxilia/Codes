#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;
const int lim=1000000500;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int q;
    cin >> q;
    int lm=50000;
    while(q--){
        int z;
        cin >> z;
        for(int i=2;i<=lm;i++){
            if(z==1) break;
            while(z%i==0){
                if(z/i==1){
                    cout << i;
                    z/=i;
                    break;
                }
                z/=i;
                cout << i << " x ";
            }
            if(i!=2) i++;
        }
        if(z>1) cout << z;
        newline
    }
    return 0;
}
