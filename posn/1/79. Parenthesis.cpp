#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int main(){
    stack<char> st;
    int q;
    cin >> q;
    while(q--){
        string s;
        bool ch;
        cin >> s;
        int len=s.length();
        for(int i=0;i<len;i++){
            if(!st.empty() && st.top()=='(' && s[i]==')') st.pop();
            else if(!st.empty() && st.top()=='[' && s[i]==']') st.pop();
            else st.push(s[i]);
        }
        if(st.empty()) cout << "Yes\n";
        else cout << "No\n";
        while(!st.empty()) st.pop();
    }
    return 0;
}
