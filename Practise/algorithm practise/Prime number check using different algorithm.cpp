#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;//ignore

void prime_o_n(long long int n){
	for(long long int i=2;i<n;i++){
		if(!(n%i)){
			cout<<"The number is not  prime."<<endl;
			return;
		}
	}
	cout<<"The number is prime."<<endl;
	
}

void prime_o_sqrt_n(long long int n){
	for(long long int i=2;i*i<n;i++){
		if(!(n%i)){
			cout<<"The number is not  prime."<<endl;
			return;
		}
	}
	cout<<"The number is prime."<<endl;
} 


void prime_o_log_n(long long int n){
	
	bool a[n+1];
	a[0]=0;
	a[1]=0;
	for(int i=2;i<=n;i++)
		a[i]=1;
	for(int i=2;i*i<=n;i++){
		if(a[i]==1){
			for(int j=2;i*j<=n;j++)
				a[i*j]=0;
		}
	}
	//open this to show all prime nuber until n
	//*
	  for(int i=0;i<=n;i++){
		if(a[i]){
			cout<<i<<", ";
		}
	}
	cout<<endl;
	//*/
	if(a[n])
		cout<<"The number is prime"<<endl;
	else 
		cout<<"The number is not prime"<<endl;
}


int main(){
	long long int n;
	cout<<"Enter a number: "<<endl;	
	cin>>n;
   
   //////////////////////////////////////////////////
    /*
     * Calling the algorithm of o(n) function 
     * to check is it a prime number
     */
    prime_o_n(n);
    //done/////////////////////////
  
   //////////////////////////////////////////////////   
    /*
     * Calling the algorithm of o(sqrt(n)) function 
     * to check is it a prime number
     */
    prime_o_sqrt_n(n);
    //done///////////////////////////

   //////////////////////////////////////////////////   
    /*
     * Calling the algorithm of o(log(n)) function 
     * to check is it a prime number
     */
    prime_o_log_n(n);
    //done////////////////////////
    
	
	
	return 0;
}
