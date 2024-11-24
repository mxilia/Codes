#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
char limbo[1000][1000];
int di[4]={0,0,1,-1};
int dj[4]={1,-1,0,0};
int cnt,w,h;

int max(int a,int b){
    if(a>b) return a;
    return b;
}

void play(int i,int j){
    cnt++;
    int k;
    limbo[i][j]='.';
    for(k=0;k<4;k++){
        if(i+di[k]>=0 && i+di[k]<h && j+dj[k]>=0 && j+dj[k]<w){
            if(limbo[i+di[k]][j+dj[k]]=='*'){
                play(i+di[k],j+dj[k]);
            }
        }
    }
    return;
}

int main(){
    int i,j,mx=INT_MIN;
    scanf("%d %d\n",&w,&h);
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf(" %c",&limbo[i][j]);
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
           if(limbo[i][j]=='*'){
                cnt=0;
                play(i,j);
                mx=max(mx,cnt);
           }
        }
    }
    printf("%d",mx);
    return 0;
}
