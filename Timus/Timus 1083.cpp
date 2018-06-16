#include<stdio.h>
using namespace std;

int main(){
    char kstr[21];
    int n,k,temp,ans,i,m;
    scanf ("%d %s",&n,kstr);
    ans=n;
    for(k=0;kstr[k]!='\0';k++);
    if(k<n){
        temp=n%k;
        if(temp==0) temp=k;
        for(i=1,m=0;m!=temp;i++){
            m=(n-i*k);
            ans*=m;
        }
    }
    printf("%d",ans);

return 0;
}
