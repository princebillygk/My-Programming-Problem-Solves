#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int seiveSize=1000001;
//hey man it is 10^7
bitset<seiveSize> primeCheck;
vector<int> prime;

void seiveGen(){
	primeCheck[0]=primeCheck[1]=0;
	primeCheck.set(); //setting all elements to 1
	for(ll i=2;i<=seiveSize;i++){
		//genarally we could run it through i*i if prime vector is not required
		if(primeCheck[i]){
			prime.push_back(i);
			for(ll j=i*i;j<=seiveSize;j+=i){
				primeCheck[j]=0;
			}
		}
	}
	printf("Size: %d\n",prime.size());
	for(int i=0;i<prime.size();i++){
		printf("%d ",prime[i]);
	}
	
}

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	seiveGen();
	return 0;
}