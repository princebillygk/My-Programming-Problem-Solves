#include<stdio.h>
#include<iostream>
#include<math.h>
#define pi acos(-1)
using namespace std;
int main(){
//    freopen("Output.txt","w",stdout);
    double R,marked_area,Case,circle_area;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        cin>>R;
        circle_area=pi*R*R;
        marked_area=(4*R*R)-circle_area;
        printf("Case %d: %.2f\n",i,marked_area);
    }

    return 0;
}
