#include<stdio.h>

int main(){
    long long int n;
    while(1){
        scanf("%lld",&n);
        if(n<0)
            break;
        else{
            printf("%lld\n",n*(n+1)/2+1);
        }
    }

    return 0;
}

