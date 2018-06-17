#include<stdio.h>
#include<stdlib.h>
int main(){
//    freopen("output.txt","w",stdout);
    char a[11];
    int sum,res;
    while(1){
        sum=0;
        scanf("%s",a);
        if(a[0]==48)
            exit(0);
        for(int i=0;a[i]!='\0';i++){
            sum+=(a[i]-48);
        }
        res=sum;
        while(res>=10){
            sum=res;
            res=0;
            while(sum){
                res+=sum%10;
                sum/=10;
            }
        }
        printf("%d\n",res);
    }

    return 0;
}
