#include<iostream>
using namespace std;
int main(){
    int base,target,time,steps,Case;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        cin>>target>>base;
        steps=target-base;
        if(steps<0)
            steps*=-1;
        cout<<"Case "<<i<<": "<<steps*4+target*4+19<<endl;
    }
    return 0;
}
