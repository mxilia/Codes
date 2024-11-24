#include <bits/stdc++.h>
#define newline cout << "\n";
#define inf 1e6+7
using namespace std;

int cnt[205];

int main(){
    int n;
    cin >> n;
    cnt[6]=1,cnt[9]=1,cnt[12]=1,cnt[15]=1,cnt[18]=1,cnt[20]=1;
    for(int i=20;i<=100;i++){
        if(cnt[i-6] || cnt[i-9] || cnt[i-20]) cnt[i]=1;
    }
    if(n<6){
        cout << "no";
        return 0;
    }
    for(int i=6;i<=n;i++){
        if(cnt[i]) cout << i,newline
    }
    return 0;
}
