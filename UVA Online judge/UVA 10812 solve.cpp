#include<iostream>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	long long int testCase,a,b,x,y;
	cin>>testCase;
	while(testCase--){
		cin>>a>>b;
		x=(a+b)/2; //get team 1 value
		y=(a-b)/2; //get team 2 value
		//cout<<x<<" "<<y<<endl;
		if(
			y<0 || //check if y is negative
			(x+y)!=a //check if it the result was noninteger
		   ) //check if the value is valid
			cout<<"impossible"<<endl;
		else
			cout<<x<<" "<<y<<endl;
	}
	return 0;
}