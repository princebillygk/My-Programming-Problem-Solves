#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,correct=0;
    char operation,s[4];
    while(scanf("%d%c%d=%s",&a,&operation,&b,s)!=EOF){
        if(s[0]=='?'){
            continue;
        }
        c=atoi(s);
        if(operation=='+' && a+b==c)
            correct++;
        else if(operation=='-' && a-b==c)
            correct++;
    }
    printf("%d\n",correct);
    return 0;
}

