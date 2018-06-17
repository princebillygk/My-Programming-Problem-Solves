#include<stdio.h>
#include<iostream>
#include<math.h>
#define pi acos(-1)
using namespace std;
int main(){
//    freopen("Output.txt","w",stdout);
    double R,r,n,Case;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        cin>>R>>n;
        r=R*sin(pi/n)/(1+sin(pi/n));
        printf("Case %d: %f\n",i,r);
    }
//    printf("\n");
    return 0;
}
