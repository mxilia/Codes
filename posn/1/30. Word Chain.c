#include <stdio.h>
#include <string.h>

int l,n;
char s[30005][1005];

int comp(char a[1005],char b[1005]){
    int i,cnt=0;
    for(i=0;i<l;i++){
        if(cnt>2) return 1;
        if(a[i]!=b[i]) cnt++;
    }
    if(cnt>2) return 1;
    return 0;
}

int main(){
    int i;
    scanf("%d %d",&l,&n);
    for(i=0;i<n;i++) scanf("%s",&s[i]);
    for(i=1;i<=n;i++){
        if(comp(s[i-1],s[i])) break;
    }
    printf("%s",s[i-1]);
    return 0;
}
