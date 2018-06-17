#include<stdio.h>
#include<string.h>
int main()
{
    int inp1[20][3];
    int n,i,j,big,small;
    int res[20];
    scanf("%d",&n);

 for (i=0;i<n;i++)
        {
            scanf("%d %d %d",&inp1[i][0],&inp1[i][1],&inp1[i][2]);
            big=1000;
            small=10000;
            for(j=0;j<3;j++)
            {
                if(inp1[i][j]>big)
                    big=inp1[i][j];
                if(inp1[i][j]<small)
                    small=inp1[i][j];
            }
             for(j=0;j<3;j++)
            {
                if((inp1[i][j]<big)&&(inp1[i][j]>small))
                    res[i]=inp1[i][j];

            }
        }

for(i=0;i<n;i++)
 {
    printf("Case %d: %d\n",i+1,res[i]);
 }


}


