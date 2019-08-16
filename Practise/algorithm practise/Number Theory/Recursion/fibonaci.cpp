#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;


lli fibonacci(lli);

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	lli n;
	while(scanf("%lld",&n)!=EOF){
		//printf("Hello worlld\n");
		printf("fibonacci(%lld) = %lld\n",n,fibonacci(n));
	}
	return 0;
}

lli fibonacci (lli n){
	//cout<<n<<" ";
	if (n==0 || n==1) return n;
	if(n>1) return fibonacci(n-1)+fibonacci(n-2);
	else return 0;
}

