  #include<iostream>
  #include<vector>
  #define N 999999
  using ull=unsigned long long;
  using ll= long long;
  using namespace std;
  
  int main(){
	//freopen("output.txt","w",stdout);
	bool a[N];
	ull temp;
	vector<long long unsigned> prime;
	for(ull i=3;i<N;i++) a[i]=true;
	for(ull i=3;i*i<=N;i+=2){
		for(ull j=i*i;j<=N;j+=i){
			a[j]=false;
		}
	}
	prime.push_back(2);
	for(ull i=3;i<=N;i+=2){
		if(a[i]){	
			//cout<<i<<endl;
			prime.push_back(i);
		}
	}
	//cout<<"Ready"<<endl;
	//*
	ull l,u,af1,af2,an1,an2;
	ll near, far,dist;
	while(cin>>l>>u){
		if(l==u){
			cout<<"There are no adjacent primes."<<endl;
			continue;
		}
		else if(l>u){
			cout<<"l should be lower than u"<<endl;
			continue;
		}
		near=-1; far=-1;		
		bool range[u-l+1];
		vector<int> primerange;
		for(ull i=0;i<u-l+1;i++) range[i]=true;
				
		for(ull i=0;prime[i]*prime[i]<=u;i++){
			try{
				if(prime[i]==0)
					throw 100;
				temp=(l/prime[i])*prime[i];
				if(temp<l) temp+=prime[i];
				for(ull j=temp;j<=u;j+=prime[i]){
					//cout<<"j= "<<j<<endl;
					range[j-l]=false;
				}
				if(temp==prime[i])
					range[temp-l]=true;
			}catch(...){
				cout<<"prime[i]="<<prime[i]<<endl;
			}
		}
		if(l==1)	range[0]=false;
		for(ull i=0;i<u-l+1;i++) 
			if(range[i]){
				//cout<<i+l<<endl;
				primerange.push_back(i+l);
			}
			  
		//*	  
		for(ull i=0;i<primerange.size()-1;i++){
			if(primerange.empty())
				break;
			dist=primerange[i+1]-primerange[i];
			//cout<<primerange[i]<<" "<<primerange[i+1]<<" "<<dist<<endl;
			if(dist>far){
				af1=primerange[i];
				af2=primerange[i+1];
				far=dist;
			}
			if(near<0 || dist<near){
				an1=primerange[i];
				an2=primerange[i+1];
				near=dist;
			}
		}
		if(near==-1)
			cout<<"There are no adjacent primes."<<endl;
		else
			cout<<an1<<","<<an2<<" are closest, "<<af1<<","<<af2<<" are most distant."<<endl;
			//*/
	}
	//*/
	//system("gedit output.txt");  
	return 0;  
  }
  

