#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
    int n,m,i,mid,d,f,park,max,min;
    scanf("%d",&n);
    while(n){
        max=0,min=99;
        scanf("%d",&m);
        int e[m];
        for(i=0;i<m;i++){
            scanf("%d",&e[i]);
            if(e[i]>max)
                max=e[i];
            if(e[i]<min)
                min=e[i];
            }
        mid=(max+min)/2;
        d=abs(mid-e[0]);
        park=e[0];
        for(i=1;i<m;i++){
                f=abs(mid-e[i]);
                if(f<d){
                    d=f;
                    park=e[i];
                }
        }
//        printf("max= %d min= %d mid= %d park= %d\n",max,min,mid,park);
        printf("%d\n",((max-park)+(park-min))*2);
        n--;
    }
    return 0;
}
