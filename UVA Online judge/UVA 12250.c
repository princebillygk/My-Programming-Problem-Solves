#include<stdio.h>
#include<string.h>
int main()
{
    char str[2000][15],res[2000][15];
    int i=0,n=0;

    while(1)
    {

        scanf("%s",str[i]);

        if(strcmp(str[i],"#")==0)
            break;
        else if(strcmp(str[i],"HELLO")==0)
            strcpy(res[i],"ENGLISH");

        else if(strcmp(str[i],"HOLA")==0)
            strcpy(res[i],"SPANISH");
        else if(strcmp(str[i],"HALLO")==0)
            strcpy(res[i],"GERMAN");
        else if(strcmp(str[i],"BONJOUR")==0)
            strcpy(res[i],"FRENCH");
        else if(strcmp(str[i],"CIAO")==0)
            strcpy(res[i],"ITALIAN");
        else if(strcmp(str[i],"ZDRAVSTVUJTE")==0)
            strcpy(res[i],"RUSSIAN");
        else
            strcpy(res[i],"UNKNOWN");
            i++;
    }
    int temp=i;
    i=0;


    while(i<temp)
    {
        printf("Case %d: %s\n",i+1,res[i]);
        i++;
    }
    return 0;
}
