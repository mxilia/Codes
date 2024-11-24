#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

queue<int> q[11];
queue<int> priority;
int student[1005];

int main(){
    int nc,ns;
    cin >> nc >> ns;
    for(int i=0;i<ns;i++){
        int c,s;
        cin >> c >> s;
        student[s]=c;
    }
    while(true){
        char opr;
        cin >> opr;
        if(opr=='X'){
            cout << "0";
            break;
        }
        if(opr=='E'){
            int z;
            cin >> z;
            if(q[student[z]].empty()) priority.push(student[z]);
            q[student[z]].push(z);
        }
        else {
            if(priority.empty()){
                cout << "empty";
                newline
                continue;
            }
            cout << q[priority.front()].front();
            q[priority.front()].pop();
            if(q[priority.front()].empty()) priority.pop();
            newline;
        }
    }
    return 0;
}