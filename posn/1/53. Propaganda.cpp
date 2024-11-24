#include <bits/stdc++.h>
using namespace std;
const int lim=2000000000;

int main(){
    int z;
    cin >> z;
    if(z==1){
        cout << "No";
        return 0;
    }
    int lim=sqrt(z);
    for(int i=2;i<=lim;i++){
        if(!(z%i)){
            printf("No");
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
