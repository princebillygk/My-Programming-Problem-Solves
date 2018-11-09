#include<iostream>

using namespace std;


void prime_o_n(long long int n){
	bool flag;
	cout<<"Algorithm 1: "<<endl;
	for(long long int k=2;k<=n;k++){
		flag=true;
		for(long long int i=2;i<=k/2;i++){
			if(k%i==0){
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<k<<", ";
	}
	cout<<endl;
}

void prime_o_sqrt_n(long long int n){
	bool flag;
	cout<<"Algorithm 2: "<<endl;
	for(long long int k=2;k<=n;k++){
		flag=true;
		for(long long int i=2;i*i<=k;i++){
			if(k%i==0)
			{
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<k<<", ";
	}
	cout<<endl;
}

void prime_o_log_n(long long int n){
	bool a[n];
	cout<<"Algorithm 3: "<<endl;
	for(long long int i=2;i<=n;i++)
		a[i]=1;
	a[0]=a[1]=0;
	for(long long int i=2;i*i<=n;i++){
		for(long long int j=2;i*j<=n;j++){
			a[i*j]=0;
		}
	}
	for(long long int i=0;i<=n;i++){
		if(a[i])
			cout<<i<<", ";
	}
	cout<<endl;
}

int main(){
	long long int n;
	cout<<"Enter n: ";
	cin>>n;
	//prime_o_n(n);
	prime_o_sqrt_n(n);
	//prime_o_log_n(n);
	
	return 0;
}
