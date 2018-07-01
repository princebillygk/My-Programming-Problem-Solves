#include<iostream>
using namespace std;
int main(){
    int Case;
    long long m,n,k,sum,temp;
    cin>>Case;
    for(int i=1;i<=Case;i++){
        cin>>n>>m;
        k=0;
        sum=0;
        while(k!=n){
            temp=m;
            while(temp--)
                sum-=++k;

            temp=m;
            while(temp--)
                sum+=++k;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
