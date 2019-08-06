#include<cstdio>
#include<iostream>
using namespace std;

int calc(int n, int base){ //calculate the sum of all digits
	if(n==0)
		return 0;
	else 
		return n%base+calc(n/base,base);
}

int main(){
	/*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	
	for(int i=2991;i<=9999;i++){
		if(calc(i,10)==calc(i,12) && calc(i,12)==calc(i,16))
			printf("%d\n",i);
		// cout<<i<<": "<<endl;
		// cout<<calc(i,10)<<" ";
		// cout<<calc(i,12)<<" ";
		// cout<<calc(i,16)<<endl<<endl;
	}	

	return 0;
}