#include<iostream>
using namespace std;

int main(){
    long long int l1,l2,l3,k,c;
    int Case;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        cin>>l1>>l2>>l3;
        if((l1+l2)>l3 && (l2+l3)>l1 && (l1+l3)>l2 && !(l1==l2 && l2==l3)){
            if(l1>l2 && l1>l3){
              c=l1*l1;
              k=l2*l2+l3*l3;
            }
            else if(l2>l1 && l2>l3){
              c=l2*l2;
              k=l1*l1+l3*l3;
            }
            else{
              c=l3*l3;
              k=l2*l2+l1*l1;
            }
            if(c==k){
                cout<<"Case "<<i<<": "<<"yes"<<endl;
            }
            else
                cout<<"Case "<<i<<": "<<"no"<<endl;

        }
        else
            cout<<"Case "<<i<<": "<<"no"<<endl;

    }
    return 0;
}
