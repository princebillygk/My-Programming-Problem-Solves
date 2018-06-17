#include<stdio.h>

int main(){
    int a,b,c,n;
    scanf("%d",&n);

    while(n--){
        scanf("%d",&a);
        b=a/2;
        c=a-b;
        printf("%d %d\n",b,c);
    }

    return 0;
}
