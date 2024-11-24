#include <stdio.h>
#include <string.h>
#include <math.h>
#define test printf("Pass\n");

char a[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){
    int i,j,r,c,cnt=0;
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%c",a[cnt%26]);
            cnt++;
        }
        printf("\n");
    }

    return 0;
}
