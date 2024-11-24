#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int i;
    for(i=0;i<5;i++){
        char s[10];
        scanf("%s",&s);
        int len=strlen(s),sum=0,specsum=0,j;
        for(j=1;j<=len;j++){
            specsum+=pow(s[j-1]-'0',j);
            sum+=(s[j-1]-'0')*pow(10,len-j);
        }
        if(sum==specsum) printf("Y");
        else printf("N");
    }
    return 0;
}
