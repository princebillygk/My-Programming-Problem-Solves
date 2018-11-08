#include<iostream>
using namespace std;
using ll=long long;
int main(){
	int n;
	cin>>n;
	int d1=0,d2=0,temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>temp;
			if(i==j)
				d1+=temp;
			if(n-i-1==j)
				d2+=temp;
		}		
	}
	cout<<abs(d1-d2)<<endl;
}
