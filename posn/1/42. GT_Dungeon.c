#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int k,ei,ej,si,sj,mn=INT_MAX,r,c;
char board[20][20];
int flag[20][20];
int di[4]={1,0,-1,0};
int dj[4]={0,1,0,-1};

int min(int a,int b){
    if(a<b) return a;
    else return b;
}

void play(int i,int j,int count,int samestep,int direct){
    printf("%d %d %d\n",i,j,count);
    if(i==ei && j==ej){
        mn=min(mn,count);
        return;
    }
    int l;
    flag[i][j]=1;
    for(l=0;l<4;l++){
        if(samestep>=k-1 && direct==l) continue;
        int nextcnt=0;
        if(direct==l) nextcnt=samestep+1;
        if(i+di[l]>=0 && i+di[l]<r && j+dj[l]>=0 && j+dj[l]<c && board[i+di[l]][j+dj[l]]!='#' && !flag[i+di[l]][j+dj[l]]){
            play(i+di[l],j+dj[l],count+1,nextcnt,l);
        }
    }
    flag[i][j]=0;
    return;
}

int main(){
    int q,i,j;
    scanf("%d %d",&q,&k);
    q--;
    while(q--){
        mn=INT_MAX;
        memset(board,'\0',sizeof(board));
        scanf("%d %d",&r,&c);
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                scanf(" %c",&board[i][j]);
                if(board[i][j]=='s') si=i,sj=j;
                if(board[i][j]=='e') ei=i,ej=j;
            }
        }
        play(si,sj,0,1,-1);
        printf("%d\n",mn);
    }
    return 0;
}