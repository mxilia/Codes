#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

struct A
{
    int x,y;
};

vector<A> vec[5];

bool cmp(A a,A b){
    if(a.y*b.x==a.x*b.y) return a.x*a.x+a.y*a.y<b.x*b.x+b.y*b.y;
    return a.y*b.x<a.x*b.y;
}

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            int x,y;
            cin >> x >> y;
            if(x>0 && y>0) vec[1].push_back({x,y});
            if(x<0 && y>0) vec[2].push_back({x,y});
            if(x<0 && y<0) vec[3].push_back({x,y});
            if(x>0 && y<0) vec[4].push_back({x,y});
        }
        for(int i=1;i<=4;i++){
            sort(vec[i].begin(),vec[i].end(),cmp);
            int sz=vec[i].size();
            if(i==2) for(int j=sz-1;j>=0;j--) cout << vec[i][j].x << " " << vec[i][j].y << "\n";
            else for(int j=0;j<sz;j++) cout << vec[i][j].x << " " << vec[i][j].y << "\n";
            vec[i].clear();
        }
    }
    return 0;
}
