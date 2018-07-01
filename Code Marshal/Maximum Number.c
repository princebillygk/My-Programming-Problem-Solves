#include<stdio.h>

int main()
{
//    freopen("output.txt","w",stdout);
    int a,b,c,test_case,large,i;
    scanf("%d",&test_case);
    for(i=1; i<=test_case; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c)
            large=a;
        else if(b>c && b>c)
            large=b;
        else
            large=c;

        printf("Case %d: %d\n",i,large);
//        if(i!=test_case)
//            printf(" ");
//        printf("\n");
    }

    return 0;
}
