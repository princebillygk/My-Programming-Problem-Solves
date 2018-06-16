#include<stdio.h>
#include<math.h>
int main(){
    long long int a,b,i;
    long double c;
    int f;
    while(1){
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)
            break;
        for(f=0,i=a;i<=b;i++){
            c=sqrt(i);
            if(i/c==c && c-(int)c==0)
                f++;
        }
        printf("%d\n",f);
    }
    return 0;
}
