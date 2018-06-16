#include<stdio.h>
#include<string.h>
int main()
{
    int inp1[100],inp2[100],inp3[100];
    int n,i=0;
    char res[100][5];
    scanf("%d",&n);

 for (i=0;i<n;i++)
        {
            scanf("%d %d %d",&inp1[i],&inp2[i],&inp3[i]);
            if((inp1[i]<=20)&&(inp2[i]<=20)&&(inp3[i]<=20))
                strcpy(res[i],"good");
            else
                strcpy(res[i],"bad");
        }

for(i=0;i<n;i++)
 {
     printf("Case %d: %s\n",i+1,res[i]);
 }


}


