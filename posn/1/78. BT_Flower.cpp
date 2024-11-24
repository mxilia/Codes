#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int main(){
    stack<int> st;
    int q;
    cin >> q;
    while(q--){
        int opr;
        cin >> opr;
        if(opr==1){
            int x;
            cin >> x;
            st.push(x);
        }
        else {
            if(st.empty()) cout << "-1";
            else {
                cout << st.top();
                st.pop();
            }
            newline
        }
    }
    return 0;
}
