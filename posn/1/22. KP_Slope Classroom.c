#include <stdio.h>

int arr[1050][1050];

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,m,s,i,j,cnt=0;
        scanf("%d %d %d",&n,&m,&s);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
                arr[i][j]+=s*i;
            }
        }
        for(j=0;j<m;j++){
            int mx=-1;
            for(i=0;i<n;i++){
                if(arr[i][j]>mx){
                    cnt++;
                    mx=arr[i][j];
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
