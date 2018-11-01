#include<iostream>
#define N 1000000

using namespace std;

int main(){
	freopen("output.txt","w",stdout);
	bool a[1000000],flag;
	int  b[1000000],item=0,number;
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
		flag=true;
		cout<<number<<":"<<endl;
		for(int i=0;b[i]<number-1 && flag;i++){
			for(int j=i;b[j]<number-1 && flag;j++){
				if(b[i]+b[j]==number){
					flag=false;
					cout<<b[i]<<"+"<<b[j]<<endl;
				}
			}
		}
		if(flag)
			cout<<"NO WAY!"<<endl;
	}
	system("gedit output.txt");
	return 0;
}
