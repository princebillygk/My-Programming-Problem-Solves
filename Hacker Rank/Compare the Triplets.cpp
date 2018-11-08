#include<iostream>
using namespace std;
int main(){
	int a1,a2,a3,b1,b2,b3,alice=0,bob=0;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	if(a1>b1)
		alice++;
	else if(a1<b1)
		bob++;
	if(a2>b2)
		alice++;
	else if(a2<b2)
		bob++;
	if(a3>b3)
		alice++;
	else if(a3<b3)
		bob++;
	cout<<alice<<" "<<bob<<endl;
}
