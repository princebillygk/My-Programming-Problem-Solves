#include<bits/stdc++.h>

using namespace std;

vector<int> prime;

void  seiveAlg(int n){
	
	//marking prime numbers
	bool integer[n+1];
	memset(integer, true ,sizeof(integer));
	for(int i=2;i*i<=n;i++){
		if(integer[i]){
			for(int j = i*i ; j <= n; j+=i){
				integer[j]=false;
			}
		}
	}

	//selecting prime numbers
	for(int i=2;i<=n;i++){
		if(integer[i])
			prime.push_back(i);
	}
}


int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n;
	scanf("%d",&n);
	seiveAlg(n);
	printf("There are %d prime numbers from 0 to %d\n",prime.size(), n );
	for(int i=0 ;i<prime.size();i++){
		printf("%d ",prime[i]);
	}	
	return 0;
}