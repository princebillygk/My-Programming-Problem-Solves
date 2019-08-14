#include<cstdio>
#include<iostream>
#include<bitset>
#define limit 10000
using namespace std;

bitset<100000> num;

int main(){
	/*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int curnum, digit, genaratedNumber;
	num.set();
	for(int i=1;i<=limit;i++){
		if(num.test(i)){
	 		printf("%d\n",i);
	 	}
		curnum=i;
	 	genaratedNumber=curnum;
	 	while(curnum){
	 		digit=curnum%10;
	 		curnum=curnum/10;
	 		genaratedNumber+=digit;
	 	}
	 	num.reset(genaratedNumber); 
	}
	return 0;
}