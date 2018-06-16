
#include<stdio.h>

int main()
{
    int inp1[100];
    int n,i=0,j;
    int pro[100],res[100];
    scanf("%d",&n);

for (i=0;i<n;i++)
        {
            scanf("%d",&inp1[i]);
            pro[i]=(((((inp1[i]*567)/9)+7492)*235)/47)-498;

                pro[i]=pro[i]/10;
                res[i]=pro[i]%10;

            if(res[i]<0)
                res[i]=res[i]*(-1);

        }

for(i=0;i<n;i++)
 {
     printf("%d\n",res[i]);
 }
}


