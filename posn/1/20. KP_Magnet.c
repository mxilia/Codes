#include <stdio.h>

char board[105][105];

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&board[i][j]);
        }
    }
    for(i=0;i<n;i++){
        int cnt=0;
        for(j=0;j<n;j++){
            if(board[i][j]=='#') cnt++;
        }
        for(j=0;j<n;j++){
            if(cnt>0) board[i][j]='#',cnt--;
            else board[i][j]='.';
        }
    }
    for(j=0;j<n;j++){
        int cnt=0;
        for(i=0;i<n;i++){
            if(board[i][j]=='#') cnt++;
        }
        for(i=0;i<n;i++){
            if(cnt>0) board[i][j]='#',cnt--;
            else board[i][j]='.';
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c",board[i][j]);
        }
        printf("\n");
    }
    return 0;
}
