#include <stdio.h>

char board[8][8];
char bch='*',wch='*';

void play(char c,int i,int j,int first,int di,int dj){
    if(i<0 || i>=8 || j<0 || j>=8) return;
    if(board[i][j]=='K' && c>=97) {wch=c; return;}
    if(board[i][j]=='k' && c<=90) {bch=c; return;}
    if(board[i][j]!='.' && !first) return;
    if((c=='n' || c=='N' || c=='p' || c=='P') && !first) return;
    play(c,i+di,j+dj,0,di,dj);
    return;
}

int main(){
    int q,i,j;
    scanf("%d",&q);
    while(q--){
        bch='.',wch='.';
        for(i=0;i<8;i++){
            scanf("%s",&board[i]);
        }
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                if(board[i][j]=='r' || board[i][j]=='R'){
                    play(board[i][j],i,j,1,1,0);
                    play(board[i][j],i,j,1,-1,0);
                    play(board[i][j],i,j,1,0,1);
                    play(board[i][j],i,j,1,0,-1);
                }
                else if(board[i][j]=='b' || board[i][j]=='B'){
                    play(board[i][j],i,j,1,1,1);
                    play(board[i][j],i,j,1,1,-1);
                    play(board[i][j],i,j,1,-1,1);
                    play(board[i][j],i,j,1,-1,-1);
                }
                else if(board[i][j]=='q' || board[i][j]=='Q'){
                    play(board[i][j],i,j,1,1,0);
                    play(board[i][j],i,j,1,-1,0);
                    play(board[i][j],i,j,1,0,1);
                    play(board[i][j],i,j,1,0,-1);
                    play(board[i][j],i,j,1,1,1);
                    play(board[i][j],i,j,1,1,-1);
                    play(board[i][j],i,j,1,-1,1);
                    play(board[i][j],i,j,1,-1,-1);
                }
                else if(board[i][j]=='n' || board[i][j]=='N'){
                    play(board[i][j],i,j,1,2,1);
                    play(board[i][j],i,j,1,2,-1);
                    play(board[i][j],i,j,1,-2,1);
                    play(board[i][j],i,j,1,-2,-1);
                    play(board[i][j],i,j,1,1,2);
                    play(board[i][j],i,j,1,1,-2);
                    play(board[i][j],i,j,1,-1,2);
                    play(board[i][j],i,j,1,-1,-2);
                }
                else if(board[i][j]=='P'){
                    play(board[i][j],i,j,1,-1,1);
                    play(board[i][j],i,j,1,-1,-1);
                }
                else if(board[i][j]=='p'){
                    play(board[i][j],i,j,1,1,1);
                    play(board[i][j],i,j,1,1,-1);
                }
            }
        }
        if(bch!='.') printf("%c check black king.",bch);
        else if(wch!='.') printf("%c check white king.",wch);
        else printf("No king is in check.");
        printf("\n");
    }
    return 0;
}