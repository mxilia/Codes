#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

int freqi[1005][30];
int freqj[1005][30];
char board[1005][1005];

int main(){
    int q;
    cin >> q;
    while(q--){
        memset(freqi,0,sizeof(freqi));
        memset(freqj,0,sizeof(freqj));
        int n,m;
        cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> board[i][j];
                freqi[i][tolower(board[i][j])-'a']++;
                freqj[j][tolower(board[i][j])-'a']++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(freqi[i][tolower(board[i][j])-'a']==1 && freqj[j][tolower(board[i][j])-'a']==1) cout << board[i][j];
            }
        }
        newline
    }
    return 0;
}