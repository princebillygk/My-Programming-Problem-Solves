#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
//    freopen("output.txt","w",stdout);
    int n,i=1,ans;
    float _ans;
    while(1){
        scanf("%d",&n);
        if(n<0)
            exit(0);
        _ans=log(n)/log(2);
        ans=_ans;
        if(_ans>ans){
            ans++;
        }
        printf("Case %d: %d\n",i,ans);
        i++;
    }

    return 0;
}
