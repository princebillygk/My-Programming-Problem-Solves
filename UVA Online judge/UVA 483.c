#include<stdio.h>
#include<stdlib.h>

int main(){
 //   freopen("output.txt","w",stdout);
    char string[1000];
    int i,j,ws;
    while(gets(string)){
        ws=0;                                         //scanf("%[^\n]",string)!=EOF
        for(i=0;string[i]!='\0';i++){
            if(string[i]==' '){
            for(j=i-1;j>=ws;j--)
                putchar(string[j]);
            putchar(' ');
            ws=i+1;
            }
        }
        for(j=i-1;j>=ws;j--)
            putchar(string[j]);
        putchar('\n');

    }
    return 0;
}
