#include <stdio.h>
#include <string.h>
char direction[4]={'N','E','S','W'};

int dindex(char c){
    if(c=='N') return 0;
    else if(c=='E') return 1;
    else if(c=='S') return 2;
    else return 3;
}

int main(){
    char s[105],face='N';
    scanf("%s",&s);
    int i,len=strlen(s),x=0,y=0;
    for(i=0;i<len;i++){
        if(s[i]=='Z'){
            face='N';
            printf("Z");
            continue;
        }
        if(s[i]==face) printf("F");
        else {
            int di=dindex(face);
            while(face!=s[i]){
                printf("R");
                di=(di+1)%4;
                face=direction[di];
            }
            printf("F");
        }
    }
    return 0;
}
