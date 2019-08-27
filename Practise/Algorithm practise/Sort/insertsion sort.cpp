#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"How many elements do you want to enter?"<<endl;
	cin>>n;
	int a[n],b[n];
	cout<<"Enter them: "<<endl;
	for(int i=0;i<n;i++){
		cout<<i+1<<": ";
		cin>>a[n];
	}
	
	b[0]=a[0];
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]<b[j]){
				for(int k=j;k<=i;k++)
					b[k+1]=b[k];
			}
		}
		b[i]=a[i];
	}
	
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	
	return 0;
}
