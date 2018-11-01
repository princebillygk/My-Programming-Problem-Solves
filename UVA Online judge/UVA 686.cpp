#include<iostream>
#define N 32768

using namespace std;

int main(){
	//freopen("output.txt","w",stdout);
	bool a[N];
	int  b[N],item=0,number,count;
	//a[0]=a[1]=0;
	for(int i=2;i<=N;i++){
		a[i]=1;
	}
	for(int i=2;i*i<=N;i++){
		for(int j=2;i*j<=N;j++){
			a[i*j]=0;
		}
	}
	for(int i=2;i<=N;i++){
		if(a[i])
			b[item++]=i;
	}
	/*
	for(int i=0;i<item;i++){
		cout<<b[i]<<" ";
	}
	//*/
	
	while(cin>>number){
		if(!number)
			break;
		count=0;
		for(int i=0;b[i]<number-1;i++){
			for(int j=i;b[j]<number-1;j++){
				if(b[i]+b[j]==number){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	//system("gedit output.txt");
	return 0;
}
