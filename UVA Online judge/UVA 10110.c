#include<stdio.h>
#include<math.h>

int main()
{
    unsigned int n,i,a,count;
    while(1){
        scanf("%d",&n);
        if(n==0)
        	break;
        else
        {
        	a=sqrt(n);
//            printf("%d\n",a);
        	if(a*a==n)
        		printf("yes\n");
        	else
        		printf("no\n");

        }


    }
    return 0;
}
