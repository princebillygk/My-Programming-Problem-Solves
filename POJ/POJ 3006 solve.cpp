#include<cstdio>
#include<iostream>
#include<bitset>
using namespace std;
typedef long long ll;

const int seiveSize=1000001;
bitset<seiveSize> primeCheck;



void seive(){
	primeCheck.set(); //set all 1
	primeCheck[0]=primeCheck[1]=0;
	for (ll i=2;i*i<=seiveSize;i++){
		if(primeCheck[i]){
			for(ll j=i*i;j<=seiveSize;j+=i){
				primeCheck[j]=0;			
			}
		}
	}
}

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int a,n,d,count;
	ll i;
	seive();
	while(scanf("%d %d %d",&a,&d,&n),(a&&d&&n)){
		count=0;
		for(i=a;count<n;i+=d){
			if(primeCheck[i]){
				count++;
				//printf("prime: %d\n",count);
			}
		}
		printf("%d\n",i-d);
	}
	return 0;
}