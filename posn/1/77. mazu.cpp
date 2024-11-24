#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int main(){
    int n,cnt=0;
    cin >> n;
    stack<char> st;
    for(int i=0;i<n;i++){
        char c; cin >> c;
        if(!st.empty() && st.top()==c) st.pop();
        else st.push(c);
    }
    cout << st.size();
    newline
    if(st.empty()) cout << "empty";
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}
