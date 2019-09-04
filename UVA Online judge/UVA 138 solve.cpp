#include <iostream>
#include<cstdio>
using namespace std;
typedef long long ll;
ll ugly[1500];
int main(){

	/*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	ll counter2=0,counter3=0,counter5=0,test2, test3, test5;
	ll index=1;
	int input;

	ugly[0]=1;

	while(index<1500){
		test2=ugly[counter2]*2;
		test3=ugly[counter3]*3;
		test5=ugly[counter5]*5;
		if(test2<test3){
			if(test2<test5){
				ugly[index++]=test2;
				counter2++;
			}else{
				ugly[index++]=test5;
				counter5++;
			}
		}else{
			if(test3<test5){
				ugly[index++]=test3;
				counter3++;
			}else{
				ugly[index++]=test5;
				counter5++;
			}
		}
		if(ugly[index-2]==ugly[index-1])
			index--;
	}

	printf("The 1500'th ugly number is %lld.\n",ugly[1500-1]);

	return 0;
}
