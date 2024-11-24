#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int mod=10000007;

char s[4][10005];
int mp[4][10000007],mx=-1;

int main(){
    int len,i,j,k,ansi,ansj,hashing;
    for(i=0;i<4;i++){
        scanf(" %s",s[i]);
        len=strlen(s[i]);
        for(j=0;j<len;j++) s[i][j]=tolower(s[i][j]);
    }
    for(i=0;i<3;i++){
        len=strlen(s[i]);
        for(j=0;j<len;j++){
            hashing=0;
            for(k=j;k<len;k++){
                hashing=(103*(hashing+(s[i][k]-'a'+1)))%mod;
                mp[i][hashing]=1;
            }
        }
    }
    len=strlen(s[3]);
    for(j=0;j<len;j++){
        hashing=0;
        for(k=j;k<len;k++){
            hashing=(103*(hashing+(s[i][k]-'a'+1)))%mod;
            if(mp[0][hashing] && mp[1][hashing] && mp[2][hashing]){
                if(k-j>mx){
                    mx=k-j;
                    ansi=j;
                    ansj=k;
                }
            }
        }
    }
    for(i=ansi;i<=ansj;i++){
        printf("%c",s[3][i]);
    }
    return 0;
}
