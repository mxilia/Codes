#include <bits/stdc++.h>
#define newline cout << "\n";
#define pii pair<int,int>
using namespace std;
using ll=long long;

stack<int> st;

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    string s,m;
    int len;
    cin >> s;
    len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='['){
            st.push(-1);
            continue;
        }
        if(s[i]==']'){
            while(!st.empty() && st.top()!=-1){
                m+=(st.top()+'0');
                st.pop();
            }
            st.pop();
            continue;
        }
        if(!isdigit(s[i])){
            m+=s[i];
            continue;
        }
        int temp=s[i]-'0';
        while(!st.empty() && st.top()>=temp){
            m+=(st.top()+'0');
            st.pop();
        }
        st.push(temp);
    }
    while(!st.empty()) m+=(st.top()+'0'),st.pop();
    for(int i=0;i<m.length();i++){
        if(isdigit(m[i])){
            int temp=pow(2,m[i]-'0'+1),sum=st.top();
            st.pop();
            sum+=st.top();
            st.pop();
            sum+=sum*temp/100;
            st.push(sum);
        }
        else st.push(20);
    }
    cout << st.top();
    return 0;
}