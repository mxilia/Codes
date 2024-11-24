#include <stdio.h>
#include <string.h>

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        char s[1005];
        scanf("%s",s);
        int n,k;
        scanf("%d %d",&n,&k);
        int i,len=strlen(s),idx=(n-(k%n))%n;
        for(i=0;i<(len/n);i++){
            int cnt=0;
            while(cnt<n){
                printf("%c",s[(i*n)+idx]);
                idx=(idx+1)%n;
                cnt++;
            }
        }
    }
    return 0;
}
