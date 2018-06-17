#include<stdio.h>
int main(){
 //   freopen("output.txt","w",stdout);
    int n,i,limit,moves,sum,j=1;

    while(1){
        sum=0;
        moves=0;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        limit=sum/n;
        for(i=0;i<n;i++){
            if(a[i]>limit)
               moves+=(a[i]-limit);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j++,moves);
    }

    return 0;
}
