#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	long long a[5],min=0,max=0;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}	
	for(int i=0;i<4;i++){
		for(int j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				a[j]=a[j]^a[j+1];
				a[j+1]=a[j]^a[j+1];
				a[j]=a[j]^a[j+1];
			}
		}
	}
	for(int i=0;i<4;i++){
		min+=a[i];
		max+=a[i+1];
	}
	cout<<min<<" "<<max;
	return 0;
}
