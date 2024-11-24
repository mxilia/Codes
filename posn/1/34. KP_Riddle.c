#include <stdio.h>
#include <string.h>

char s[20500],r[20500];
int st[20500];
int i,j;

void solve(){
    scanf(" %s",s);
    int len=strlen(s),idx=0,id=0;
    for(i=0;i<len;i++){
        if(s[i]>='0' && s[i]<='9') r[idx++]=s[i];
        else if(s[i]=='m') r[idx++]=s[i+2];
    }
    for(i=idx-1;i>=0;i--){
        if(r[i]>='0' && r[i]<='9') st[id++]=r[i]-'0';
        else if(r[i]=='x'){
            int a=st[id--];
            int b=st[id--];
            if(a>b) st[id++]=a;
            else st[id++]=b;
        }
        else {
            int a=st[id--];
            int b=st[id--];
            if(a<b) st[id++]=a;
            else st[id++]=b;
        }
    }
    printf("%d\n",st[id]);
    return;
}
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        solve();
    }
    return 0;
}
