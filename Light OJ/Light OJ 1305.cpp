#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int Case,x1,y1,x2,y2,x3,y3,x4,y4,area;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        x4=x3-(x2-x1);
        y4=y1+(y3-y2);
        area=((x1*y2-y1*x2)+(x2*y3-y2*x3)+(x3*y4-y3*x4)+(x4*y1-y4*x1))/2;
        cout<<"Case "<<i<<": "<<x4<<" "<<y4<<" "<<abs(area)<<endl;
    }
    return 0;
}
