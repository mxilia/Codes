#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;
int freq[10];
int main(){
    int z;
    cin >> z;
    if(z==0){
        cout << "10";
        return 0;
    }
    if(z==1){
        cout << "1";
        return 0;
    }
    for(int i=9;i>=2;i--){
        while(z%i==0){
            freq[i]++;
            z/=i;
        }
    }
    if(z!=1){
        cout << "-1";
        return 0;
    }
    for(int i=2;i<=9;i++){
        for(int j=1;j<=freq[i];j++){
            cout << i;
        }
    }
    return 0;
}
