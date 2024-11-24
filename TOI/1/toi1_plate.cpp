#include <bits/stdc++.h>
#define newline cout << '\n';
using namespace std;
using ll=long long;

struct m_queue
{
    int q[1505];
    int front,back,sz,c_sz;
    m_queue(){
        front=back=c_sz=0;
        sz=1505;
    }
    void push(int z){
        q[back]=z;
        back=(back+1)%sz;
        c_sz++;
        return;
    }
    void pop(){
        front=(front+1)%sz;
        c_sz--;
        return;
    }
    bool empty(){
        if(c_sz==0) return 1;
        else return 0;
    }
    int top(){
        return q[front];
    }
};

int ids[10005];
m_queue qc,qs[15];

signed main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int nc,ns;
    cin >> nc >> ns;
    for(int i=0;i<ns;i++){
        int cl,id;
        cin >> cl >> id;
        ids[id]=cl; 
    }
    while(true){
        char cmd;
        cin >> cmd;
        if(cmd=='X'){
            cout << '0';
            break;
        }
        else if(cmd=='E'){
            int id;
            cin >> id;
            qs[ids[id]].push(id);
            if(qs[ids[id]].c_sz==1) qc.push(ids[id]);
        }
        else if(cmd=='D'){
            if(qs[qc.top()].empty()){
                cout << "empty\n";
                continue;
            }
            cout << qs[qc.top()].top() << '\n';
            qs[qc.top()].pop();
            if(qs[qc.top()].c_sz==0) qc.pop();
        }
    }
    return 0;
}
