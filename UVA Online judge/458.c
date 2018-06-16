/* -7 with every charector*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    char a[1000];
    while(gets(a)){
        for(int i=0;a[i]!='\0';i++){
            a[i]=a[i]-7;
        }
        puts(a);
    }
    return 0;
}

