#include<iostream>

using namespace std;

int main(){
	int T,V[10],maxV;
	string URL[10];
	cin>>T;
	for(int i=1;i<=T;i++){
		maxV=0;
		for(int j=0;j<10;j++){
			cin>>URL[j];
			cin>>V[j];
			if(maxV<V[j])
				maxV=V[j];
		}
		//Case #i:
		cout<<"Case #"<<i<<":"<<endl;
		for(int j=0;j<10;j++){
			if(V[j]==maxV)
			cout<<URL[j]<<endl;
			}		
	}
	return 0;
}
