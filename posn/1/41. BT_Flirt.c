#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int r,c,a,si,sj,ei,ej,cnt;
int board[25][25];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};

void play(int i,int j){
    if(!board[i][j]) cnt++,board[i][j]=cnt;
    if(i==ei && j==ej){
        int m,n;
        for(m=1;m<=r;m++){
            for(n=1;n<=c;n++){
                printf("%d ",board[m][n]);
            }
            printf("\n");
        }
        return;
    }
    int k;
    for(k=0;k<4;k++){
        int idx=(a+k)%4;
        if(i+di[idx]>=1 && i+di[idx]<=r && j+dj[idx]>=1 && j+dj[idx]<=c && board[i+di[idx]][j+dj[idx]]==0) play(i+di[idx],j+dj[idx]);
    }
    return;
}

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        cnt=0;
        memset(board,0,sizeof(board));
        scanf("%d %d %d %d %d %d %d",&r,&c,&a,&si,&sj,&ei,&ej);
        play(si,sj);
    }
    return 0;
}