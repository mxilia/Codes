#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        char s[10005];
        scanf("%s",s);
        int len=strlen(s);
        if(s[0]=='0') printf("0");
        else {
            int i,cnt=0;
            for(i=len-1;i>=0;i--){
                if(s[i]!='0') break;
                cnt++;
            }
            if(cnt==0) {printf("0");continue;}
            for(i=0;i<cnt;i++) printf("1");
        }
        printf("\n");
    }
    return 0;
}
