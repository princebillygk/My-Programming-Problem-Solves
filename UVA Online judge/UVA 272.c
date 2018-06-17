#include<stdio.h>


int main(){
    char a[100001];
    int f=0,i=0;
    while(scanf("%c",&a[i])!=EOF){
            i++;
    }
    a[i]='\0';
    for(i=0;a[i]!=0;i++){
        if(a[i]=='"' && f==0){
            printf("``");
            f=1;
        }
        else if(a[i]=='"' && f==1){
            printf("''");
            f=0;
        }
        else
            putchar(a[i]);
    }
    return 0;
}
