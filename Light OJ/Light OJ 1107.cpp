#include<iostream>

using namespace std;

int main(){
    int Case,x1,y1,x2,y2,M,x,y;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        cin>>x1>>y1>>x2>>y2>>M;
        cout<<"Case "<<i<<":"<<endl;
        while(M--){
            cin>>x>>y;
            if((y>y1)&&(y<y2)&&(x>x1)&&(x<x2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
