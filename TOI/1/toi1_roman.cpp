#include <bits/stdc++.h>
#define newline cout << '\n';
using namespace std;
using ll=long long;

int cnt[5];
// i v x l c
// 0 1 2 3 4

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int d;
    cin >> d;
    for(int i=1;i<=d;i++){
        int cur=i;
        if(cur>=100){ // c..c
            cnt[4]+=cur/100;
            cur%=100;
        }
        if(cur>=90){ // xc
            cnt[2]++, cnt[4]++;
            cur-=90;
        }
        if(cur>=50){ // l
            cnt[3]++;
            cur-=50;
        }
        if(cur>=40){ // xl
            cnt[2]++, cnt[3]++;
            cur-=40;
        }
        if(cur>=10){ // x..x
            cnt[2]+=cur/10;
            cur%=10;
        }
        if(cur>=9){ // ix
            cnt[0]++, cnt[2]++;
            cur-=9;
        }
        if(cur>=5){ // v
            cnt[1]++;
            cur-=5;
        }
        if(cur>=4){ // iv
            cnt[0]++, cnt[1]++;
            cur-=4;
        }
        if(cur>=1){ // i..i
            cnt[0]+=cur;
        }
    }
    for(int i=0;i<5;i++) cout << cnt[i] << ' ';
    return 0;
}
