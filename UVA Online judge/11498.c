#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    int x,y;
    int p[1000],q[1000];
    char res[1000][7];



    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        scanf("%d %d",&x,&y);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&p[i],&q[i]);
            if((p[i]==x)||(q[i]==y))
                strcpy(res[i],"divisa");
            else if((p[i]>x)&&(q[i]>y))
                strcpy(res[i],"NE");
            else if((p[i]<x)&&(q[i]<y))
                strcpy(res[i],"SO");
            else if((p[i]>x)&&(q[i]<y))
                strcpy(res[i],"SE");
            else
                strcpy(res[i],"NO");

        }

        for(i=0;i<n;i++)
        {
            printf("%s\n",res[i]);
        }
    }




}
