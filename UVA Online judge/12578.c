#include<stdio.h>
#include<math.h>

int main(){
//    freopen("output.txt","w",stdout);
    int n;
    double l,g,r,k,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&l);
        k=l/5;
        r=k*k*M_PI;
        g=(l*6/10)*l -r;
        printf("%.2lf %.2lf\n",r, g);
    }
    return 0;
}
