#include<bits/stdc++.h>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	long int sum,n;
	scanf("%ld",&n);
	if(n>0)
		sum=((n+1)*n)/2;
	else
		sum=((1-n)*n)/2+1;
	printf("%d\n",sum);

	return 0;
}