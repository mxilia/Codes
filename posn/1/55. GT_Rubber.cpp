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
        prev=current*prev/gcd(current,prev);
    }
    int hour=(prev/60)%24;
    int minute=prev%60;
    cout << hour/10 << hour%10 << ":" << minute/10 << minute%10;
    return 0;
}
