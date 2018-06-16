#include<stdio.h>
int main(){
    freopen("output.txt","w",stdout);
    int test_case,amplitude,frequency,i,j;
    scanf("%d",&test_case);
    while(test_case--){

        scanf("%d %d",&amplitude,&frequency);
        while(frequency--){
            for(i=1;i<=amplitude;i++){
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");

                }
                for(i=amplitude-1;i>=1;i--){
                    for(j=i;j>=1;j--)
                    printf("%d",i);
                printf("\n");
            }
            if(frequency>0)
                printf("\n");
        }
        if(test_case>0)
            printf("\n");
    }
    return 0;
}
