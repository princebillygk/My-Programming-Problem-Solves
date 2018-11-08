#include<iostream>
using namespace std;
using ll=long long;
int main(){
	int n;
	cin>>n;
	ll temp,sum=0;
	while(n--){
		cin>>temp;
		sum+=temp;
	}
	cout<<sum<<endl;
}
