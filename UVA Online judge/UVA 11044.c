#include<stdio.h>
int main()
{
    int inp1[10000],inp2[10000];
    int n,i=0;
    int res[100];
    scanf("%d",&n);
 for (i=0;i<n;i++)
        {
            scanf("%d %d",&inp1[i],&inp2[i]);
            res[i]=(inp1[i]-(inp1[i]%3))*(inp2[i]-(inp2[i]%3))/9;
        }
for(i=0;i<n;i++)
     printf("%d\n",res[i]);
}


