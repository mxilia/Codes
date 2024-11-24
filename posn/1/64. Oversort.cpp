#include <bits/stdc++.h>
#define newline cout << "\n";
using namespace std;

struct s
{
    char c[110];
    bool operator<(const s &o)const{
        return strcmp(c,o.c)<0;
    }
};

int arr1[100005];
double arr2[100005];
s arr3[100005];

int main(){
    int z; cin >> z;
    if(z==1){
        int n; cin >> n;
        for(int i=0;i<n;i++) cin >> arr1[i];
        sort(arr1,arr1+n);
        for(int i=0;i<n;i++) cout << arr1[i] << " ";
        newline
        for(int i=n-1;i>=0;i--) cout << arr1[i] << " ";
    }
    else if(z==2){
        int n; cin >> n;
        for(int i=0;i<n;i++) cin >> arr2[i];
        sort(arr2,arr2+n);
        for(int i=0;i<n;i++) cout << fixed << setprecision(0) << arr2[i] << " ";
        newline
        for(int i=n-1;i>=0;i--) cout << fixed << setprecision(0) << arr2[i] << " ";
    }
    else if(z==3){
        int n; cin >> n;
        for(int i=0;i<n;i++) scanf(" %c",&arr1[i]);
        sort(arr1,arr1+n);
        for(int i=0;i<n;i++) printf("%c ",arr1[i]);
        newline
        for(int i=n-1;i>=0;i--) printf("%c ",arr1[i]);
    }
    else if(z==4){
        int n; cin >> n;
        for(int i=0;i<n;i++) scanf(" %s", &arr3[i].c);
        sort(arr3,arr3+n);
        for(int i=0;i<n;i++) cout << arr3[i].c << " ";
        newline
        for(int i=n-1;i>=0;i--) cout << arr3[i].c << " ";
    }
    return 0;
}