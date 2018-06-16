
#include<stdio.h>

int main(){

long long int i,j,k,n,m,max,r,temp,x,y;
while(scanf("%lld %lld",&i,&j)!=EOF){
        x=i;y=j;
    if(i>j){
        temp=i;
        i=j;
        j=temp;
    }
    max=0;
    for(n=i;n<=j;n++){
        m=n;
        for(r=1;m!=1;r++){
            if(m & 1)
                m=3*m+1;

            else
                m=m/2;

        }
//        printf("%d\n",r);
        if(r>max)
            max=r;

    }

    printf("%lld %lld %lld\n",x,y,max);
}
    return 0;
}
