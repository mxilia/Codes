#include <bits/stdc++.h>
using namespace std;

long long gcd(int a,int b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main(){
    long long n,prev;
    cin >> n;
    cin >> prev;
    n--;
    while(n--){
        long long current;
        cin >> current;
        if(current>prev) prev=prev*current/gcd(current,prev);
        else prev=prev*current/gcd(current,prev);
    }
    cout << prev;
    return 0;
}
