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
char a[10005],b[10005],maxx[10005],minn[10005],sum[10005],temp[10005];
int neg[10005];

int main(){
    int i,mxlen,mnlen,lena,lenb,diff,minus=0;
    memset(sum,'0',sizeof(sum));
    memset(neg,1,sizeof(neg));
    scanf(" %s %s",a+1,b+1);
    //a -
    if(a[1]!='-' && b[1]=='-'){
        strcpy(temp+1,a+1);
        strcpy(a+1,b+1);
        strcpy(b+1,temp+1);
    }
    if(a[1]=='-' && b[1]!='-'){
        lena=strlen(a+1);
        lenb=strlen(b+1);
        for(i=1;i<=lena-1;i++) a[i]=a[i+1];
        a[lena]='\0';
        lena=strlen(a+1);
        //check max min
        if(lena>lenb) minus=1;
        else if(lena==lenb){
            for(i=1;i<=lena;i++){
                if(b[i]<a[i]){
                    minus=1;
                    break;
                }
            }
        }
        if(minus){
            for(i=1;i<=lena;i++) maxx[i]=a[i];
            for(i=1;i<=lenb;i++) minn[i]=b[i];
            mxlen=lena;
            mnlen=lenb;
        }
        else {
            for(i=1;i<=lena;i++) minn[i]=a[i];
            for(i=1;i<=lenb;i++) maxx[i]=b[i];
            mxlen=lenb;
            mnlen=lena;
        }
        diff=mxlen-mnlen;
        // operation
        for(i=mnlen;i>0;i--){
            int csum=(sum[i+diff]-'0')*neg[i+diff];
            int nsum=csum+(maxx[i+diff]-'0')-(minn[i]-'0');
            if(nsum<0){
                if(sum[i+diff-1]=='0'){
                    sum[i+diff-1]+=1;
                    neg[i+diff-1]=-1;
                }
                else sum[i+diff-1]-=1;
                nsum=10+nsum;
            }
            sum[i+diff]=(nsum%10)+'0';
            if(nsum/10) sum[i+diff-1]=(nsum/10)+'0';
        }
        for(int i=diff;i>0;i--){
            int csum=(sum[i]-'0')*neg[i];
            int nsum=csum+(maxx[i]-'0');
            if(nsum<0){
                if(sum[i-1]=='0'){
                    sum[i-1]+=1;
                    neg[i-1]=-1;
                }
                else sum[i-1]-=1;
                nsum=10+nsum;
            }
            sum[i]=(nsum%10)+'0';
            if(nsum/10) sum[i-1]=(nsum/10)+'0';
        }
    }
    //b -
    else {
        if(a[1]=='-' && b[1]=='-'){
            minus=1;
            lena=strlen(a+1);
            lenb=strlen(b+1);
            for(int i=1;i<=lena-1;i++) a[i]=a[i+1];
            for(int i=1;i<=lenb-1;i++) b[i]=b[i+1];
            a[lena]='\0';
            b[lenb]='\0';
        }
        lena=strlen(a+1);
        lenb=strlen(b+1);
        mxlen=max(lena,lenb);
        mnlen=min(lena,lenb);
        diff=mxlen-mnlen;
        for(i=mnlen;i>0;i--){
            int csum=sum[i+diff]-'0';
            int ca,cb;
            if(lena>lenb) ca=a[i+diff]-'0',cb=b[i]-'0';
            else cb=b[i+diff]-'0',ca=a[i]-'0';
            sum[i+diff]=((csum+ca+cb)%10)+'0';
            if((csum+ca+cb)/10) sum[i+diff-1]=((csum+ca+cb)/10)+'0';
        }
        for(int i=diff;i>0;i--){
            if(lenb>lena){
                int csum=sum[i]-'0';
                int cb=b[i]-'0';
                sum[i]=((csum+cb)%10)+'0';
                if((csum+cb)/10) sum[i-1]=((csum+cb)/10)+'0';
            }
            else {
                int csum=sum[i]-'0';
                int ca=a[i]-'0';
                sum[i]=((csum+ca)%10)+'0';
                if((csum+ca)/10) sum[i-1]=((csum+ca)/10)+'0';
            }
        }
    }
    int start=0;
    //test
    if(minus) printf("-");
    for(i=0;i<=mxlen-1;i++){
        if(sum[i]=='0' && !start) continue;
        start=1;
        printf("%c",sum[i]);
    }
    printf("%c",sum[mxlen]);
    return 0;
}
