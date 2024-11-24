#include <stdio.h>
#include <math.h>
#include <string.h>
#define newline printf("\n");

char brick[25][25];

int main(){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%s",&brick[i]);
    }
    for(i=0;i<m;i++){
        int z,j;
        scanf("%d",&z);
        while(z--){
            for(j=0;j<n;j++){
                if(brick[j][i]=='O' || brick[j][i]=='#') break;
            }
            j--;
            //printf("s: %d %d\n",j,i);
            if(j>=0) brick[j][i]='#';
        }
    }
    for(i=0;i<n;i++) printf("%s\n",brick[i]);
    return 0;
}