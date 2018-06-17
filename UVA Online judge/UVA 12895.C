#include<stdio.h>
//I learned something new today Pow function is not so efficient for my code I should make my own Pow
long long int Pow(long long int base, unsigned int exp)
{
    if (exp > 0)
        return base * Pow(base, exp-1);
    return 1;
}
int main(){
    long long int num,sum,r[16],n,i,j,m,tmp;
    scanf("%d",&n);
    while(n){
        scanf("%lld",&num);
        i=0;
        tmp=num;
        while(tmp){
          r[i]=tmp%10;
//          printf("%d ",tmp);
          tmp=tmp/10;
//          printf("%lld\n",r[i]);
          i++;

        }

        for(sum=0,j=0;j<i;j++){
//            printf("%lld + ",sum);
            m=Pow(r[j],i);
//            printf("(%lld^%lld=)%lld",r[j],i,m);
            sum+=m;

//            printf("= %lld\n",sum);
        }
        if(sum==num)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
        n--;
    }

    return 0;
}
