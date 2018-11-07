#include<iostream>
#include<vector>
#define N 1000000
using namespace std;

int main(){
	bool a[N];
	vector<int> prime;
	for(int i=3;i<=N;i+=2) a[i]=true;
	for(int i=3;i*i<=N;i+=2){
		for(int j=i*i;j<=N;j+=i){
			a[j]=false;
		}
	}
	prime.push_back(2);
	for(int i=3;i<=N;i+=2){
		if(a[i]){
			//cout<<i<<endl;
			prime.push_back(i);
		}
	}//*
	int temp;
	for(int lower=1000001,higher=2*1000000;higher<=10000000;lower+=higher,higher+=higher){
		int bound =higher-lower+1;
		bool range[bound];
		for(int i=0;i<bound;i++) range[i]=true;
		cout<<"Done"<<endl;
		for(int i=0;prime[i]*prime[i]<=higher;i++){
			temp=(lower/prime[i])*prime[i];
			if(temp<lower)
				temp+=prime[i];
			for(int j=temp;j<=higher;j+=i){
				range[j-lower]=false;
				cout<<"working"<<endl;
			}
		}
		for(int i=0;i<bound;i++){
			if(range[i]){
				cout<<i+lower<<endl;
			}
		}
		cout<<"Working on it"<<endl;
	}
	//*/
		
	return 0;
}
