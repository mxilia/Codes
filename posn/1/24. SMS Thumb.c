#include <stdio.h>
#include <math.h>
#include <string.h>
#define newline printf("\n");

char tele[10][4]={
                  {'0','0','0','0'},
                  {'0','0','0','0'},
                  {'C','A','B','0'},
                  {'F','D','E','0'},
                  {'I','G','H','0'},
                  {'L','J','K','0'},
                  {'O','M','N','0'},
                  {'S','P','Q','R'},
                  {'V','T','U','0'},
                  {'Z','W','X','Y'},
                 };
int num[3][3]={
               {1,2,3},
               {4,5,6},
               {7,8,9},
              };

char ans[100];
int idx;

void type(int i,int j,int m){
    if(num[i][j]==1){
        while(m--){
            if(idx>0){
                idx--;
                ans[idx]='\0';
            }
        }
    }
    else if(num[i][j]==7 || num[i][j]==9){
        ans[idx]=tele[num[i][j]][m%4];
        idx++;
    }
    else {
        ans[idx]=tele[num[i][j]][m%3];
        idx++;
    }
    return;
}

int main(){
    int n,s,si,sj,m,i;
    scanf("%d",&n);
    scanf("%d %d",&s,&m);
    si=(s-1)/3;
    if(s%3) sj=(s%3)-1;
    else sj=2;
    type(si,sj,m);
    n--;
    while(n--){
        int h,v;
        scanf("%d %d %d",&h,&v,&m);
        si+=v;
        sj+=h;
        type(si,sj,m);
    }
    if(ans[0]=='\0') {printf("null");return 0;}
    for(i=0;i<idx;i++){
        printf("%c",ans[i]);
    }
    return 0;
}
