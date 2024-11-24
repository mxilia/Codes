#include <stdio.h>
#include <string.h>
#include <ctype.h>

char board[30][30];

int len,m,n;
int di[8]={1,-1,0,0,1,1,-1,-1};
int dj[8]={0,0,1,-1,1,-1,1,-1};

int play(int i,int j,int di,int dj,int cnt,int count,char str[20]){
    if(cnt==len && count==len) return 1;
    if(i>=n || i<0 || j>=m || j<0) return 0;
    //printf("%c i: %d j: %d di: %d dj: %d cnt: %d\n",board[i][j],i,j,di,dj,cnt);
    if(board[i][j]==str[cnt]) return play(i+di,j+dj,di,dj,cnt+1,count+1,str);
    else return play(i+di,j+dj,di,dj,0,count+1,str);
    return 0;
}

int main(){
    int i,j,k,t;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) scanf("%s",&board[i]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            board[i][j]=tolower(board[i][j]);
        }
    }
    scanf("%d",&t);
    while(t--){
        char str[20];
        int stop=0;
        scanf("%s",str);
        len=strlen(str);
        for(i=0;i<len;i++) str[i]=tolower(str[i]);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                for(k=0;k<8;k++){
                    if(play(i,j,di[k],dj[k],0,0,str)){
                        printf("%d %d\n",i,j);
                        stop=1;
                        break;
                    }
                }
                if(stop) break;
            }
            if(stop) break;
        }
    }
    return 0;
}
