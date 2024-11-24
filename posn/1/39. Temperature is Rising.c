#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int di[4]={1,-1,0,0};
int dj[4]={0,0,1,-1};
int board[1005][1005];
int n,i,j,mx=INT_MIN;

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

void play(int ii,int jj){
    int k;
    mx=max(mx,board[ii][jj]);
    for(k=0;k<4;k++){
        if(ii+di[k]<=n && ii+di[k]>0 && jj+dj[k]<=n && jj+dj[k]>0){
            if(board[ii+di[k]][jj+dj[k]]>board[ii][jj] && board[ii+di[k]][jj+dj[k]]!=100){
                play(ii+di[k],jj+dj[k]);
            }
        }
    }
    return;
}

int main(){
    int x,y;
    scanf("%d",&n);
    scanf("%d %d",&x,&y);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&board[i][j]);
        }
    }
    play(y,x);
    printf("%d",mx);
    return 0;
}