#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

struct A
{
    int n,idx;
    bool operator<(const A &o)const{
        return n<o.n;
    }
};

struct B
{
    int n,idx;
    bool operator<(const B &o)const{
        return idx<o.idx;
    }
};

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int q;
    cin >> q;
    while(q--){
        vector<B> ans;
        A arr[100005]={};
        int n,cnt=1;
        A current;
        cin >> n;
        for(int i=0;i<n;i++) cin >> arr[i].n,arr[i].idx=i;
        sort(arr,arr+n);
        current=arr[0];
        for(int i=1;i<=n;i++){
            if(current.n==arr[i].n) cnt++;
            if(cnt==1 && current.n!=arr[i].n){
                ans.push_back({current.n,current.idx});
                current=arr[i];
            }
            else if(current.n!=arr[i].n){
                current=arr[i];
                cnt=1;
            }
        }
        sort(ans.begin(),ans.end());
        if(!ans.empty()) for(auto e:ans) cout << e.n << " ";
        else cout << "No Alone Num";
        newline
    }
    return 0;
}