#include <stdio.h>
#include <string.h>

int max(int a,int b){
    if(a>b) return a;
    return b;
}

int min(int a,int b){
    if(a<b) return a;
    return b;
}
int n,w,e,s;
int main(){
    char str[105];
    int k;
    scanf("%s",str);
    scanf("%d",&k);
    int i,len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='N') n+=1;
        if(str[i]=='E') e+=1;
        if(str[i]=='S') s+=1;
        if(str[i]=='W') w+=1;
    }
    int mxi=max(n,s);
    int mxj=max(e,w);
    int mni=min(n,s);
    int mnj=min(e,w);
    while(k--){
        if(mni) mni--;
        else if(mnj) mnj--;
        else if(mxi) mxi--;
        else if(mxj) mxj--;
    }
    printf("%d",((mxi-mni)+(mxj-mnj))*2);
    return 0;
}
