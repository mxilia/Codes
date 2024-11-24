#include <bits/stdc++.h>
#define newline cout << "\n";
#define inf 1e6+7
using namespace std;
bool flag[50000];
int main(){
    int n,sum=0,a1,a2,mn=INT_MAX;
    cin >> n;
    flag[0]=1;
    for(int i=0;i<n;i++){
        int w;
        cin >> w;
        sum+=w;
        for(int j=sum;j>=0;j--){
            if(j-w>=0 && flag[j-w]) flag[j]=1;
        }
    }
    for(int j=0;j<=sum;j++){
        if(flag[j]){
            if(abs((sum-j)-j)<mn){
                mn=abs((sum-j)-j);
                a1=max(sum-j,j);
                a2=min(sum-j,j);
            }
        }
    }
    cout << a2 << " " << a1;
    return 0;
}