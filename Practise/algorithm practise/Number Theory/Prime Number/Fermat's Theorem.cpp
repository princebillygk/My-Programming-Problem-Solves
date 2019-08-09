/*
Fermat theorems state that if 
a^(n-1)%n==1 //a=2 for 2 base pseudoprime
then n is either a pseudoprime or a prime number 
other wise it will be a composite number
*/

#include<bits/stdc++.h>

using namespace std;

void fermat(int n){
	int a= int(pow(2.0,double(n-1)));
	a=a%n;
	if (a==1){
		printf("%d pseudoprime or prime a= %d\n",n,a );
	}else{
		printf("%d composite a= %d\n",n,a);
	}
}

int main(){
	//*/
	//freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	
	for(int i=1;i<=32;i++)
		fermat(i);

	return 0;
}