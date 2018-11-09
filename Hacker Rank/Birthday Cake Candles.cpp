#include<iostream>
using namespace std;
int main(){
	int n,h=-1,temp,count;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(h<temp){
			h=temp;
			count=1;
		}else if(h==temp)
			count++;
	}
	cout<<count<<endl;
	return 0;
}
