#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c,d,m;
    x:
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==0 && b==0 && c==0 && d==0)
        exit(0);
    m=80+(40-(b-a))+40+(40-(b-c))+(40-(d-c));
    printf("%d\n",m*9);
    goto x;
}
