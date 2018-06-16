#include<stdio.h>
#include<math.h>
int main(){
    long long int n,m,x;
    long int i;
    int f1,f2,tmp;
    while(scanf("%lld",&n)!=EOF){
        x=n;
        for(f1=0,i=2;i<=(int)sqrt(n);i++){
            if(n%i==0)
                f1++;
        }
        for(m=0;n;n/=10){
            tmp=n%10;
            m=m*10+tmp;
        }
//        printf("%lld",m);
        for(f2=0,i=2;i<=(int)sqrt(m);i++){
            if(m%i==0)
                f2++;
        }
        if(f1==0 && f2==0 && x!=m)
            printf("%lld is emirp.\n",x);
        else if(f1==0)
            printf("%lld is prime.\n",x);
        else
            printf("%lld is not prime.\n",x);

    }
    return 0;
}
