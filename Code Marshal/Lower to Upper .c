#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char given_string[101],a;
    int test_case,i,j;
    scanf("%d",&test_case);
    getchar();
    for(i=1; i<=test_case; i++)
    {
        for(j=0; (a=getchar())!='\n'; j++)
        {
            given_string[j]=a;
        }
        given_string[j]='\0';
        printf("Case %d: ",i);
        for(j=0; given_string[j]!='\0'; j++)
        {
            a=toupper(given_string[j]);
            putchar(a);
        }
        putchar('\n');
    }
    return 0;
}
