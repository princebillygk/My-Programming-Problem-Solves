#include<stdio.h>
int main()
{
    int total=0,add,i,t;
    char input[7];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",input);
        if(strcmp(input,"donate")==0){
            scanf("%d",&add);
            total=total+add;
        }

        else if(strcmp(input,"report")==0){
            printf("%d",total);
        }

    }

    return 0;
}
