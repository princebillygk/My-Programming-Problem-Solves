#include<iostream>
using namespace std;

void subsetPrinter(int *a,int n)
{
	cout<<"{";
	for(int i=1;i<n;i++){
		cout<<a[i]<<", ";
		}
	cout<<a[n]<<"}"<<endl;
}

int main(){
	int a[21],i=0,n;
	cin>>n;
	a[0]=-1;
	while(1){
		if(a[i]<n){
			a[i+1]=a[i]+1;
			i++;
			}else{
				a[i-1]++;
				i--;
				}
		if(i==0)
			break;	
		
		subsetPrinter(a,i);
	}
	return 0;
}
