#include<iostream>

using namespace std;

int main(){
    unsigned long long int W,M,temp;
    int Case;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        M=1;
        cin>>W;
        cout<<"Case "<<i<<": ";
        if(W&1){
            cout<<"Impossible"<<endl;
            continue;
        }
        while(W && !(W&1)){
            W=W/2;
            M*=2;
        }
        if(!W)
            cout<<"Impossible"<<endl;
        else
            cout<<W<<" "<<M<<endl;
    }
    return 0;
}
