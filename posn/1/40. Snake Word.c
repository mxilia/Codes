#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int di[4]={1,-1,0,0};
int dj[4]={0,0,1,-1};
char board[50][50];
int flag[50][50];
int ansi[105],ansj[105];
int n,m,printed;

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

void play(int idx,int i,int j,char str[50]){
    ansi[idx]=i;
    ansj[idx]=j;
    if(idx==strlen(str+1)){
        printed=1;
        for(i=1;i<=idx;i++) printf("%d %d\n",ansi[i]+1,ansj[i]+1);
        return;
    }
    int k;
    flag[i][j]=1;
    for(k=0;k<4;k++){
        if(i+di[k]<n && i+di[k]>=0 && j+dj[k]<n && j+dj[k]>=0){
            if(!flag[i+di[k]][j+dj[k]] && board[i+di[k]][j+dj[k]]==str[idx+1]){
                play(idx+1,i+di[k],j+dj[k],str);
            }
        }
    }
    flag[i][j]=0;
}

int main(){
    int i,j,q;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&board[i][j]);
            board[i][j]=tolower(board[i][j]);
        }
    }
    scanf("%d",&q);
    while(q--){
        printed=0;
        char str[105];
        scanf(" %s",str+1);
        int len=strlen(str+1);
        for(i=1;i<=len;i++) str[i]=tolower(str[i]);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(board[i][j]==str[1]) play(1,i,j,str);
            }
        }
        if(!printed) printf("No Matching Word\n");
    }
    return 0;
}
