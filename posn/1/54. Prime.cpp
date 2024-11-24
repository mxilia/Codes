#include <bits/stdc++.h>
using namespace std;
int lim=8000000;

bool flag[8000000];

int main(){
    int k,cnt=1;
    int lm=sqrt(lim);
    cin >> k;
    if(k==1){
        cout << "2";
        return 0;
    }
    for(int i=3;i<lim;i+=2){
        flag[i]=1;
    }
    for(int i=3;i<lm;i+=2){
        if(flag[i]){
            for(int j=i*i;j<lim;j+=i){
                flag[j]=0;
            }
        }
    }
    int i=1;
    while(cnt<k){
        i+=2;
        if(flag[i]) cnt++;

    }
    cout << i;
    return 0;
}

