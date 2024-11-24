#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int A,B,C,i;
int flag[60][60][60];
int flaga[60];
void play(int a,int b,int c){
    if(flag[a][b][c]) return;
    flag[a][b][c]=1;
    if(a==0) flaga[c]=1;
    if(a){
        //b
        if(a<=B-b) play(0,b+a,c);
        else play(a-(B-b),B,c);
        //c
        if(a<=C-c) play(0,b,c+a);
        else play(a-(C-c),b,C);
    }
    if(b){
        //a
        if(b<=A-a) play(a+b,0,c);
        else play(A,b-(A-a),c);
        //c
        if(b<=C-c) play(a,0,c+b);
        else play(a,b-(C-c),C);
    }
    if(c){
        //a
        if(c<=A-a) play(a+c,b,0);
        else play(A,b,c-(A-a));
        //b
        if(c<=B-b) play(a,b+c,0);
        else play(a,B,c-(B-b));
    }
    return;
}
int main(){
    scanf("%d %d %d",&A,&B,&C);
    play(0,0,C);
    for(i=0;i<=30;i++){
        if(flaga[i]) printf("%d ",i);
    }
    return 0;
}
