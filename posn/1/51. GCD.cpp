#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main(){
    int n,prev;
    cin >> n;
    cin >> prev;
    n--;
    while(n--){
        int current;
        cin >> current;
        if(current<prev) prev=gcd(prev,current);
        else prev=gcd(current,prev);
    }
    cout << prev;
    return 0;
}
