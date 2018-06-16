#include<stdio.h>
#include<string.h>
int main(){
    freopen("out.txt","w",stdout);
    int num[100],sum,i,j=0;
    char res[100][10];
    while(1){
        scanf("%d",&num[j]);
        if(num[j]==0)
            break;
        sum=0;
        for(i=1;i<=num[j]/2;i++)
            if(num[j]%i==0){
             sum+=i;
            }
//            printf("sum=%d\n",sum);
            if(sum>num[j])
                strcpy(res[j],"ABUNDANT");
            else if(sum<num[j])
                strcpy(res[j],"DEFICIENT");
            else
                strcpy(res[j],"PERFECT");
            j++;
        }
        printf("PERFECTION OUTPUT\n");
        for(i=0;i<j;i++){
            printf("%5d  %s\n",num[i],res[i]);
        }
        printf("END OF OUTPUT\n");
    return 0;
}
