#include<stdio.h>

int main(){
//    freopen("output.txt","w",stdout);
    long long int sum,diff,n,big,temp;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld %lld",&sum,&diff);
        if(sum<diff)
            printf("impossible\n");
        else{
            temp=(sum+diff);
            if(temp%2==0){
                big=temp/2;
                printf("%lld %lld\n",big,(sum-big));
            }
            else
               printf("impossible\n");
        }
    }
    return 0;
}
