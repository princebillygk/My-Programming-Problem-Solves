#include<stdio.h>
#include<string.h>
int main()
{
    char s[10][6];
    int n,i=0,res[10];
    scanf("%d",&n);

 for (i=0;i<n;i++)
        {
            scanf("%s",s[i]);
            if(strlen(s[i])==5)
                res[i]=3;
            else{
                if((s[i][0]=='o'&&s[i][1]=='n')||(s[i][0]=='o'&&s[i][2]=='e')||(s[i][1]=='n'&&s[i][2]=='e'))
                    res[i]=1;
                else
                    res[i]=2;
            }


        }

for(i=0;i<n;i++)
 {
     printf("%d\n",res[i]);
 }


}
