#include<iostream>
using namespace std;

int main(){
	int T,N,instruction[100],current,temp;
	string cmd;
	cin>>T;
	while(T--){
		cin>>N;
		current=0;
		for(int i=0;i<N;i++){
			cin>>cmd;
			if(cmd=="LEFT"){
				instruction[i]=-1;
				current-=1;
				
			}else if(cmd=="RIGHT"){
				instruction[i]=1;
				current+=1;
			}else{
				cin>>cmd;
				cin>>temp;
				instruction[i]=instruction[temp-1];
				current+=instruction[i];
			}
		}
		cout<<current<<endl;
	}
	
	return 0;
}
