#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
 //   freopen("output.txt","w",stdout);
    char str1[26],str2[26];
    int sum1,sum2,i,per1,per2;
    float love;
    while(gets(str1)&&gets(str2)){
        sum1=0;
        sum2=0;
        for(i=0;str1[i]!='\0';i++){
            if(str1[i]<'A'||(str1[i]>'Z' && str1[i]<'a')||str1[i]>'z')
                continue;
            else if(str1[i]>='A' && str1[i]<='Z'){
                str1[i]=tolower(str1[i]);
            }
            sum1+=(str1[i]-96);
//            printf("\n%d\n",sum1);
        }
        for(i=0;str2[i]!='\0';i++){
            if(str2[i]<'A'||(str2[i]>'Z' && str2[i]<'a')||str2[i]>'z')
                continue;
            else if(str2[i]>='A' && str2[i]<='Z'){
                str2[i]=tolower(str2[i]);
            }
            sum2+=(str2[i]-96);
//            printf("%d\n",sum2);
        }

//        printf("%d %d\n",sum1,sum2);

        per1=sum1;
        per2=sum2;

//        printf("%d %d\n",per1,per2);
        while(per1>=10){
            sum1=per1;
            per1=0;
            while(sum1){
                per1+=sum1 % 10;
                sum1/=10;
            }
        }

        while(per2>=10){
            sum2=per2;
            per2=0;
            while(sum2){
                per2+=sum2 % 10;
                sum2/=10;
            }
        }
        love=0;
//        printf("%d %d\n",per1,per2);
        if(per1!=0&&per2!=0){
        (per1 > per2) ? (love=(float)per2/(float)per1*100.0):(love=(float)per1/(float)per2*100.0);
        }
        printf("%.2f %%\n",love);
    }
    return 0;
}
