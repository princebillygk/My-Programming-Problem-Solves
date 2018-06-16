#include<stdio.h>
#include<string.h>
int main()
{
    int n[75][1000],i=0,j,k[75];
    int res[75],zero,nonzero,temp;


while(1)
        {   scanf("%d",&k[i]);
            if(k[i]==0)
               break;


            for(j=0;j<k[i];j++)
                scanf("%d",&n[i][j]);

            zero=0;
            nonzero=0;

            for(j=0;j<k[i];j++)
            {
                 if(n[i][j]==0)
                    zero++;
                 else
                    nonzero++;
            }

            res[i]=nonzero-zero;
            i++;




        }


temp=i;

for(i=0;i<temp;i++)
 {
     printf("Case %d: %d\n",i+1,res[i]);
 }


}


