#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#define newline printf("\n");

char dice[7][3][3];


int main(){
    int q;
    scanf("%d",&q);
    ////1
    dice[1][0][0]='.';
    dice[1][0][1]='.';
    dice[1][0][2]='.';
    //----
    dice[1][1][0]='.';
    dice[1][1][1]='*';
    dice[1][1][2]='.';
    //----
    dice[1][2][0]='.';
    dice[1][2][1]='.';
    dice[1][2][2]='.';
    ////2
    dice[2][0][0]='.';
    dice[2][0][1]='*';
    dice[2][0][2]='.';
    //----
    dice[2][1][0]='.';
    dice[2][1][1]='.';
    dice[2][1][2]='.';
    //----
    dice[2][2][0]='.';
    dice[2][2][1]='*';
    dice[2][2][2]='.';
    ////3
    dice[3][0][0]='.';
    dice[3][0][1]='*';
    dice[3][0][2]='.';
    //----
    dice[3][1][0]='.';
    dice[3][1][1]='*';
    dice[3][1][2]='.';
    //----
    dice[3][2][0]='.';
    dice[3][2][1]='*';
    dice[3][2][2]='.';
    ////4
    dice[4][0][0]='*';
    dice[4][0][1]='.';
    dice[4][0][2]='*';
    //----
    dice[4][1][0]='.';
    dice[4][1][1]='.';
    dice[4][1][2]='.';
    //----
    dice[4][2][0]='*';
    dice[4][2][1]='.';
    dice[4][2][2]='*';
    ////5
    dice[5][0][0]='*';
    dice[5][0][1]='.';
    dice[5][0][2]='*';
    //----
    dice[5][1][0]='.';
    dice[5][1][1]='*';
    dice[5][1][2]='.';
    //----
    dice[5][2][0]='*';
    dice[5][2][1]='.';
    dice[5][2][2]='*';
    ////6
    dice[6][0][0]='*';
    dice[6][0][1]='*';
    dice[6][0][2]='*';
    //----
    dice[6][1][0]='.';
    dice[6][1][1]='.';
    dice[6][1][2]='.';
    //----
    dice[6][2][0]='*';
    dice[6][2][1]='*';
    dice[6][2][2]='*';
    while(q--){
        char str[105];
        int i,j;
        scanf("%s",&str);
        int strlens=strlen(str);
        for(i=0;i<3;i++){
            for(j=0;j<strlens;j++){
                if(j>0) printf("|");
                printf("%c%c%c",dice[str[j]-'0'][i][0],dice[str[j]-'0'][i][1],dice[str[j]-'0'][i][2]);
            }
            newline
        }
    }
    return 0;
}
