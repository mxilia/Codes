#include <stdio.h>

int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,m,i,j,k,length;
        scanf("%d %d",&n,&m);
        length=((n-1)*2+1)/2+(((n-1)*2+1)-((n-1)*2+1)/2)*(2*m-1);
        for(i=n-1;i>=0;i--){
            int triangle=(n-1-i)*2+1;
            for(j=0;j<m;j++){
                int start=m*i+(m-j-1);
                int end=m*i+(triangle/2+((triangle-triangle/2)*(2*m-1)))-(m-j-1);
                int total_acnt=2*(m-j-1)+1;
                int total_dcnt=2*j+1;
                int acnt,dcnt;
                acnt=total_acnt;
                dcnt=total_dcnt;
                for(k=0;k<length;k++){
                    if(k>=start && k<end){
                        if(dcnt){
                            printf("-");
                            if(dcnt-1==0) acnt=total_acnt;
                            dcnt--;
                        }
                        else if(acnt){
                            printf("*");
                            if(acnt-1==0) dcnt=total_dcnt;
                            acnt--;
                        }
                    }
                    else printf("o");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
