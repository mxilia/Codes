#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

struct A
{
    double x,y,s,d;
    bool operator<(const A &o)const{
        if(s==o.s) return d<o.d;
        return s<o.s;
    }
};

bool cmp(A a, A b){
    if(a.s==b.s) return a.d<b.d;
    if(a.s<b.s) return a.s>b.s;
    return a.s<b.s;
}

vector<A> vec[4];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            double x,y;
            cin >> x >> y;
            int idx;
            if(x>0 && y==0) idx=0;
            else if(x==0 && y>0) idx=1;
            else if(x<0 && y==0) idx=2;
            else if(x==0 && y<0) idx=3;
            else if(x>0 && y>0) idx=0;
            else if(x<0 && y>0) idx=1;
            else if(x<0 && y<0) idx=2;
            else if(x>0 && y<0) idx=3;
            vec[idx].push_back({x,y,abs(y/x),(x*x+y*y)});
        }
        for(int i=0;i<4;i++){
            if(i==3) sort(vec[i].begin(),vec[i].end(),cmp);
            else sort(vec[i].begin(),vec[i].end());
        }
        for(int i=0;i<4;i++){
            for(auto e:vec[i]) cout << e.x << " " << e.y, newline;
            vec[i].clear();
        }
    }
    return 0;
}