#include<stdio.h>
#include<math.h>
int main(){
    int n,i,b1,b2;
    long long int x1,x2,tmp/*,bin*/;
    float m;

    scanf("%d",&n);
    while(n){
        scanf("%f",&m);
        x1=m;
        for(/*bin=0,*/b1=0/*,i=1*/;x1;/*i*=10*/x1/=2){
            tmp=x1%2;
//            bin+=tmp*i;
            if(tmp==1)
                b1++;
        }
//        printf("%lld\n",bin);
        x2=m;
        for(b2=0;x2;x2/=10){
            tmp=x2%10;
//            printf("%d\n",tmp);
            if(tmp==1)
                b2++;
            else if(tmp==2)
                b2+=1;
            else if(tmp==3)
                b2+=2;
            else if(tmp==4)
                b2+=1;
            else if(tmp==5)
                b2+=2;
            else if(tmp==6)
                b2+=2;
            else if(tmp==7)
                b2+=3;
            else if(tmp==8)
                b2+=1;
            else if(tmp==9)
                b2+=2;

        }
        printf("%d %d\n",b1,b2);
        n--;
    }
    return 0;
}
