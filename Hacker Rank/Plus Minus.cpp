#include<iostream>
#include<cstdio>
using namespace std;
using ll=long long;
int main(){
	int n;
	cin>>n;
	float temp, pos=0,zero=0,minus=0;
	for(int i=0;i<n;i++){
			cin>>temp;
			if(temp>0)
				pos++;
			else if(temp==0)
				zero++;
			else 
				minus++;	
		}
	printf("%.6f\n%.6f\n%.6f\n",pos/n,minus/n,zero/n);	
}
