#include<stdio.h>
#include<math.h>
int main(){
    int i,sum,notprime;
    char letters[21];
    while(scanf("%s",letters)!=EOF){
        for(sum=0,i=0;letters[i]!='\0';i++){
            if(letters[i]>='a' && letters[i]<='z'){
                sum+=(letters[i]-96);
            }
            else if(letters[i]>='A' && letters[i]<='Z'){
                sum+=(letters[i]-64+26);
            }
        }
        for(notprime=0,i=2;i<=sum/2;i++){
            if(sum%i==0)
                notprime++;
        }
        if(notprime==0)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }


    return 0;
}
