#include<iostream>
#include<cstdio>
#include<cmath>
#define PI acos(-1)

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%0.*f\n",i,PI);
    }
    return 0;
}
