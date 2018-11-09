#include<iostream>
#include<vector>
#define N 1000
using namespace std;
int main(){
	bool a[N];
	int n,k;
	vector<int> prime;
	prime.push_back(2);
	for(int i=3;i<=N;i+=2) a[i]=true;
	for(int i=3;i*i<=N;i+=2){
		for(int j=i*i;j<=N;j+=i){
			a[j]=false;
		}
	}
	for(int i=3;i<=N;i+=2){
		if(a[i]){
			//cout<<i<<endl;
			prime.push_back(i);
		}		
	}
	
	while(cin>>n>>k){
		for(int i=0;prime[i]<n;i++){
			for(int j=0;j<=prime[j]-1;j++){
				if(prime[j]+prime[j+1]+1==prime[i]){
					//cout<<prime[j]<<"+"<<prime[j+1]<<"+1="<<prime[i]<<endl;
					k--;
					break;
				}
			}
		}
		if(k<=0)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
		//cout<<k<<endl;
	}
	return 0;
}
