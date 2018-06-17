#include<stdio.h>
#include<string.h>
int main(){
    int n,f,i,j,flag1,flag2,friends;
    scanf("%d",&n);
    while(n--){
        friends=0;
        scanf("%d",&f);
        char a[f][21],b[f][21];
        for(flag1=0,flag2=0,i=0;i<f;i++){
            scanf("%s %s",a[i],b[i]);
            for(j=0;j<i;j++){
               if(strcmp(a[j],a[i])==0){
                flag1++;
                break;
               }
               else if(strcmp(b[j],a[i])==0){
                flag1++;
                break;
               }
           }
            for(j=0;j<i;j++){
               if(strcmp(a[j],b[i])==0){
                flag2++;
                break;
               }
               else if(strcmp(b[j],b[i])==0){
                flag2++;
                break;
               }
            }
                if(flag1==0)
                    friends++;
               if(flag2==0)
                    friends++;
            printf("%d\n",friends);
        }


    }
    return 0;
}
