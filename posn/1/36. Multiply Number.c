#include <stdio.h>
#include <string.h>
#include <math.h>
#define test printf("Pass\n");

char a[20005],b[20005],max[20005],min[20005],mul[20005];

int main(){
    int i,j,k,aminus=0,bminus=0;
    memset(mul,'0',sizeof(mul));
    scanf("%s",a+1);
    scanf("%s",b+1);
    if(a[1]=='-' && a[2]!='0'){
        aminus=1;
        int len=strlen(a+1);
        for(i=1;i<=len-1;i++) a[i]=a[i+1];
        a[len]='\0';
    }
    if(b[1]=='-' && b[2]!='0'){
        bminus=1;
        int len=strlen(b+1);
        for(i=1;i<=len-1;i++) b[i]=b[i+1];
        b[len]='\0';
    }
    if(!((a[1]-'0')*(b[1]-'0'))){
        printf("0");
        return 0;
    }
    int lena=strlen(a+1);
    int lenb=strlen(b+1);
    if(lena>lenb){
        strcpy(max+1,a+1);
        strcpy(min+1,b+1);
    }
    else {
        strcpy(min+1,a+1);
        strcpy(max+1,b+1);
    }
    int mxlen=strlen(max+1);
    int mnlen=strlen(min+1);
    for(i=mnlen;i>=1;i--){
        for(j=mxlen;j>=1;j--){
            int cmul=mul[i+j]-'0';
            mul[i+j]=((cmul+((min[i]-'0')*(max[j]-'0')))%10)+'0';
            if((cmul+((min[i]-'0')*(max[j]-'0')))/10) mul[i+j-1]+=((cmul+((min[i]-'0')*(max[j]-'0')))/10);

        }
    }
    int start=0;
    if(bminus!=aminus) printf("-");
    for(i=1;i<=mxlen+mnlen;i++){
        if(mul[i]=='0' && !start) continue;
        start=1;
        printf("%c",mul[i]);
    }
    return 0;
}
