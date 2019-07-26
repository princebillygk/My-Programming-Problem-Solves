#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int nInput,integer[15],input,twiceCount;
	/*
	* nInput number of integers
	* integer: integers
	* twiceCount: count twice numbers 
	*/

	//taking inputs
	while(scanf("%d",&integer[0]),integer[0]!=-1){
		//if the first input is -1 break
		for(int i=1;;i++){
			scanf("%d",&input);
			if(input==0) //take inputs until 0 input
				break;
			nInput=i+1;
			integer[i]=input;
		}
		twiceCount=0;
		for(int i=0;i<nInput;i++){
			for(int j=0;j<nInput;j++){
				if(integer[j]*2==integer[i]){
					twiceCount++;
					break;
				}
			}
		}
		printf("%d\n",twiceCount);
	}
	return 0;
}