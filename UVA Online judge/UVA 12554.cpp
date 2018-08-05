#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	//freopen("output.txt","w",stdin);
	int i,j,N;
	bool flag=false;
	string name[100],song[16]={
		"Happy",
		"birthday",
		"to",
		"you",
		
		"Happy",
		"birthday",
		"to",
		"you",
		
		"Happy",
		"birthday",
		"to",
		"Rujia",
		
		"Happy",
		"birthday",
		"to",
		"you"		
	};
	cin>>N;

	for(i=0;i<N;i++){
		cin>>name[i];
	}
	i=j=0;
	if(N!=0){
		while(1){
		cout<<name[i++]<<": "<<song[j++]<<endl;
		if(i==N){
			flag=true;
			i=0;
		}
		if(j==16 ){
			j=0;
			if(flag)
				break;
			}
		}
	}
	
		
	return 0;
}

