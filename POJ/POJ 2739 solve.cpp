#include<cstdio>
#include<vector>
#include<iostream>


using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	
	//Seive Algorithm
	int n=10001;
	bool primeCheck[n+1];
	vector<int> prime;
	for(int i=0;i<=n;i++)
		primeCheck[i]=true;
	//memset(primeCheck,true,sizeof(primeCheck));
	for(int i=2; i*i<=n;i++){
		if (primeCheck[i])
			for (int j=i*i; j<=n; j+=i){
				primeCheck[j]=false;
			}
	}
	
	for(int i=2;i<=n;i++){
		if(primeCheck[i]){
			//printf("%d ", i);
			prime.push_back(i);
		}
	}
	//printf("\n%d\n",prime.size());

	//-----Main Problem solve---------
	int Input,nPrime=prime.size(),temp,count;
	while(scanf("%d",&Input),Input){
		count=0;
		for(int i=0;i<nPrime && prime[i]<=Input;i++){
			temp=0;
			for(int j=i; j<=nPrime && temp<Input; j++){
				temp+=prime[j];
				//cout<<temp<<" "<<Input<<endl;	
				if(temp==Input){
					count++;
					break;
				}
			}
			
		}
		printf("%d\n",count);
	}

	return 0;
}