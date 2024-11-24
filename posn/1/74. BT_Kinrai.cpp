#include <bits/stdc++.h>
#define newline cout << "\n";
#define int long long
using namespace std;

struct A
{
    int idx,price,score;
    bool operator<(const A &o)const{
        return price<o.price;
    }
};

struct B
{
    int score,idx;
};

A restaurant[1505];
B mx[1505];

signed main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n,q;
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int z;
            cin >> z;
            if(i==j) continue;
            restaurant[z].score++;
        }
    }
    for(int i=1;i<=n;i++) cin >> restaurant[i].price,restaurant[i].idx=i;
    sort(restaurant+1,restaurant+n+1);
    mx[0]={INT_MIN,0};
    for(int i=1;i<=n;i++){
        if(restaurant[i].score>mx[i-1].score) mx[i]={restaurant[i].score,i};
        else mx[i]=mx[i-1];
    }
    while(q--){
        int x;
        cin >> x;
        int l=1,r=n+1;
        while(l<r){
            int mid=(l+r)/2;
            if(restaurant[mid].price>x) r=mid;
            else l=mid+1;
        }
        if(l-1>=1) cout << restaurant[mx[l-1].idx].idx;
        else cout << "Not enough money";
        newline
    }
    return 0;
}