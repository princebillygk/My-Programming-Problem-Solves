#include<iostream>
#include<string>
using namespace std;
int main(){
	int  digits,step;
	string bigInteger;
	while(cin>>bigInteger, bigInteger!="END"){
		step=0;
		digits=bigInteger.length();
		if(digits==1 && bigInteger[0]=='1'){
			cout<<1<<endl;
			continue;
		}
		while(digits!=1){
			bigInteger=to_string(digits);
			digits=bigInteger.length();
			step++;
		}
		cout<<step+2<<endl;
	}
	return 0;
}
