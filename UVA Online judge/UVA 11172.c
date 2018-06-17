#include<stdio.h>
#include<string.h>
int main()
{
    int inp1[15],inp2[15];
    int n,i=0;
    char res[15];
    scanf("%d",&n);

 for (i=0;i<n;i++)
        {
            scanf("%d %d",&inp1[i],&inp2[i]);
            if(inp1[i]>inp2[i])
                res[i]='>';
            else if(inp1[i]<inp2[i])
                res[i]='<';
            else
                res[i]='=';

        }

for(i=0;i<n;i++)
 {
     printf("%c\n",res[i]);
 }


}

