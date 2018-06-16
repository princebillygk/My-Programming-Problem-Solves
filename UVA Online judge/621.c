#include<stdio.h>
#include<string.h>

int main(){
    int n,l;
    char a[1000];
    scanf("%d",&n);
    while(n){
        scanf("%s",a);
        l=strlen(a);
        if((strcmp(a,"1")==0)||(strcmp(a,"4")==0)||(strcmp(a,"78")==0))
            printf("+\n");
        else if(a[l-2]=='3' && a[l-1]=='5')
            printf("-\n");
        else if(a[0]=='9' && a[l-1]=='4')
            printf("*\n");
        else
//        if(a[0]=='1' && a[1]=='9' && a[2]=='0')
            printf("?\n");

//        else
//            printf("+\n");
        n--;
    }
    return 0;
}
