#include <stdio.h>
#include <string.h>
#include <math.h>
#define test printf("Pass\n");

int max(int a,int b){
    if(a>b) return a;
    return b;
}

int min(int a,int b){
    if(a<b) return a;
    return b;
}

int abcdef(char a){
    switch(a){
    case 'A':
        return 10;
    case 'B':
        return 11;
    case 'C':
        return 12;
    case 'D':
        return 13;
    case 'E':
        return 14;
    case 'F':
        return 15;
    }
}

char invabcdef(int a){
    switch(a){
    case 10:
        return 'A';
    case 11:
        return 'B';
    case 12:
        return 'C';
    case 13:
        return 'D';
    case 14:
        return 'E';
    case 15:
        return 'F';
    }
}

char a[100],b[100],basesum[100];

int main(){
    int base,t1=0,t2=0,i,lena,lenb,diff;
    memset(basesum,'0',sizeof(basesum));
    scanf("%d %s %s",&base,a+1,b+1);
    lena=strlen(a+1);
    lenb=strlen(b+1);
    for(i=1;i<=lena;i++){
        int num;
        if(a[i]-'0'<=9) num=a[i]-'0';
        else num=abcdef(a[i]);
        t1+=(num)*pow(base,lena-i);
    }
    for(i=1;i<=lenb;i++){
        int num;
        if(b[i]-'0'<=9) num=b[i]-'0';
        else num=abcdef(b[i]);
        t2+=(num)*pow(base,lenb-i);
    }
    printf("%d\n",t1+t2);
    int tenthsum=t1+t2,cnt=0;
    while(tenthsum>0){
        if(tenthsum%base<=9) basesum[cnt]=(tenthsum%base)+'0';
        else basesum[cnt]=invabcdef(tenthsum%base);
        tenthsum/=base;
        cnt++;
    }
    for(i=cnt-1;i>=0;i--){
        printf("%c",basesum[i]);
    }
    return 0;
}
