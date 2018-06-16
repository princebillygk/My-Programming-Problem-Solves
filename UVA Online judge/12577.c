

#include<stdio.h>

int main()
{
    char inp1[10000][6];
    int temp,i=0,count=0;
    int a[10000];




while(1)
        {
            scanf("%s",inp1[i]);
            if (strcmp(inp1[i],"*")==0)
                break;
            else if(strcmp(inp1[i],"Hajj")==0)
               a[i]=0;
            else
                a[i]=1;
                count++;
                i++;
        }
    temp=count;
    count=0;
    i=0;

for (count=0;count<temp;count++)
    {
        if(a[i]==0)
            printf("Case %d: Hajj-e-Akbar\n",count+1);
        else
            printf("Case %d: Hajj-e-Asghar\n",count+1);
            i++;
    }

}


