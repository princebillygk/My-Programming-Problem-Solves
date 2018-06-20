#include<iostream>

using namespace std;

int main(){
    long long int number;
    int Case,numberOfOne;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        cin>>number;
        numberOfOne=0;
        while(number){
            if(number&1)
                numberOfOne++;
            number/=2;
        }
        cout<<"Case "<<i<<": ";
        if(numberOfOne&1)
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;
    }
    return 0;
}
