#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;


lli factorial(lli);

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	lli n;
	while(scanf("%lld",&n)!=EOF){
		//printf("Hello worlld\n");
		if(n<0) 
			printf("%lld! = undefined\n",n);
		else
			printf("%lld! = %lld\n",n,factorial(n));
	}
	return 0;
}

lli factorial (lli n){
	if (n==0) return 1;
	return n*factorial(n-1);
	//if n is negative then undefined
}