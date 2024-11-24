#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int main(){
    stack<int> st;
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int len=s.length();
        for(int i=0;i<len;i++){
            if(s[i]==')'){
                int current=0;
                while(!st.empty()){
                    if(st.top()==-1) {st.pop();break;}
                    else if(st.top()<-1){
                        int z; z=st.top();
                        st.pop();
                        z*=-1*st.top();
                        st.pop();
                        st.push(z);
                    }
                    current+=st.top();
                    st.pop();
                }
                st.push(current);
            }
            else if(s[i]=='C') st.push(12);
            else if(s[i]=='H') st.push(1);
            else if(s[i]=='O') st.push(16);
            else if(s[i]=='(') st.push(-1);
            else if(s[i]-'0'>=0 && s[i]-'0'<=9) st.push(-1*(s[i]-'0'));
        }
        int current=0;
        while(!st.empty()){
           if(st.top()<-1){
                int z; z=st.top();
                st.pop();
                z*=-1*st.top();
                st.pop();
                st.push(z);
            }
            current+=st.top();
            st.pop();
        }
        cout << current;
        newline
        while(!st.empty()) st.pop();
    }
    return 0;
}