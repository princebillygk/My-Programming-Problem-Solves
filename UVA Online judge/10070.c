#include<stdio.h>

int main(){
    long long int n,f,i=0;
    freopen("output.txt","w",stdout);
    while(scanf("%lld",&n)!=EOF){
        if(i!=0){
            printf("\n");
        }
        i++;
        f=0;
        if(n%400==0||(n%4==0 && n%100!=0)){
            printf("This is leap year.\n");
            f++;
        }
        if(n%15==0){
            printf("This is huluculu festival year.\n");
            f++;
        }
        if(n%55==0){
            printf("This is bulukulu festival year.\n");
            f++;
        }
        if(f==0)
        printf("This is an ordinary year.\n");


    }
     return 0;
}
