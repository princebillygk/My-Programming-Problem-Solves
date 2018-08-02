#include<iostream>
#include<cstdio>
using namespace std;
string day[7]={"Sun","Mon","Tues","Wed","Thurs","Fri","Sat"};
    int dateToDay(int d,int m,int y){
    int i;
    int t[12]={0,3,2,5,0,3,5,1,4,6,2,4};
    y-=m<3;
    i=(y+y/4+y/400-y/100+t[m-1]+d)%7;
    return i;
}
int main(){
    int d,m,y;
    while(scanf("%d/ %d/ %d",&d,&m,&y)!=EOF){
    cout<<"Day: "<<day[dateToDay(d,m,y)]<<endl<<endl;
    }
    return 0;
}
