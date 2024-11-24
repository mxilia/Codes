#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;
queue<int> q;
int main(){
    int qu;
    cin >> qu;
    while(qu--){
        string s;
        int k,cnt=0,sz=0,mx=INT_MIN;
        cin >> s >> k;
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='A') q.push(1),sz++;
            else if(s[i]=='B' && cnt<k){
                q.push(0);
                cnt++; sz++;
            }
            else {
                while(q.front()!=0){
                    q.pop();
                    sz--;
                }
                q.pop();
                q.push(0);
            }
            mx=max(mx,sz);
        }
        cout << mx;
        newline
        while(!q.empty()) q.pop();
    }
    return 0;
}
