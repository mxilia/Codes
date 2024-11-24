#include <stdio.h>
#include <string.h>

int main(){
    char s[105];
    scanf("%s",&s);
    int i,len=strlen(s),x=0,y=0;
    for(i=0;i<len;i++){
        switch(s[i]){
        case 'N':
            y+=1;
            break;
        case 'E':
            x+=1;
            break;
        case 'S':
            y-=1;
            break;
        case 'W':
            x-=1;
            break;
        case 'Z':
            x=0;
            y=0;
            break;
        }
    }
    printf("%d %d",x,y);
    return 0;
}
