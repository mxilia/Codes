#include <bits/stdc++.h>
#define newline cout << "\n";
#define inf 1e7+3
using namespace std;

struct A
{
    int n,w,a,b,c;
    bool operator<(const A &o)const{
        return w>o.w;
    }
};

struct E
{
    int v,w;
};

struct node
{
    int x,y,z;
    int a,b,c;
};

int powdif(int a,int b){
    return (abs(a-b))*(abs(a-b));
}

vector<E> vec[15];
int flag[15];
int n,mn=INT_MAX;
node loc[15];

void dfs(int node,int w,int a,int b,int c){
    flag[node]=1;
    if(a>=n && b>=n && c>=n){
        mn=min(mn,w);
    }
    for(auto e:vec[node]){
        if(flag[e.v]) continue;
        dfs(e.v,w+e.w,a+loc[e.v].a,b+loc[e.v].b,c+loc[e.v].c);
    }
    flag[node]=0;
    return;
}

int main(){
    cin >> n;
    cin >> loc[0].x >> loc[0].y >> loc[0].z;
    int m; cin >> m;
    for(int i=1;i<=m;i++){
        cin >> loc[i].x >> loc[i].y >> loc[i].z;
        cin >> loc[i].a >> loc[i].b >> loc[i].c;
    }
    for(int i=0;i<=m;i++){
        for(int j=i+1;j<=m;j++){
            vec[i].push_back({j,powdif(loc[i].x,loc[j].x)+powdif(loc[i].y,loc[j].y)+powdif(loc[i].z,loc[j].z)});
            vec[j].push_back({i,powdif(loc[i].x,loc[j].x)+powdif(loc[i].y,loc[j].y)+powdif(loc[i].z,loc[j].z)});
        }
    }
    dfs(0,0,0,0,0);
    cout << mn;
    return 0;
}
