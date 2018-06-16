#include<stdio.h>
#include<math.h>

int main(){
    double h,b,ang,area,r,n;
    while(scanf("%lf %lf",&r,&n)!=EOF){
        printf("%.3lf\n",0.5*n*r*r*sin(2.0* M_PI/n));
    }
    return 0;
}

