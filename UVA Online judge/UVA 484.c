#include<stdio.h>
int main(){
    int a[9999];
    int i=0,j,k,n,count,m;
    while(scanf("%d",&a[i])!=EOF)
        i++;
    n=i;
//    printf("n=  %d\n",n);
//    for(i=0;i<n;i++){
//        printf("%d ",a[i]);
//    }
//    printf("\n",n);
    for(i=0;i<n;i++){
        for(count=1,j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                for(k=j;k<n-1;k++)
                    a[k]=a[k+1];
                n--;j--;
            }
        }
//        printf("\n",n);
//        for(m=0;m<n;m++)
//            printf("%d ",*(a+m));
//         printf("\n",n);
        printf("%d %d\n",a[i],count);
//        printf("i= %d\n",i);
    }

    return 0;
}
