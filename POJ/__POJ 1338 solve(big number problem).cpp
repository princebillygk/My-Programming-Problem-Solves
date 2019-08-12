
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

long long ugly[1500];

void makeList(){
	long long x=0;
	for(long long i=1;;i*=2){
			for(long long j=1;;j*=3){
				for(long long k=1;;k*=5){
					ugly[x++]=i*j*k;
					if(x>1500-1)
						return;
				}
			}
		}
}

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n;
	makeList();
	for(int i=0;i<1500;i++){
		printf("%dth: %d\n", i+1, ugly[i]);
	}
	while(scanf("%d",&n),n){
		printf("%lld\n",ugly[n-1]);
	}
	return 0;
}