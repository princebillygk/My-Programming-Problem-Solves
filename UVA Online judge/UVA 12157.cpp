#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	//freopen("output.txt","w",stdout);
	int T,N,callDuration,mileCost, juiceCost;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		mileCost=juiceCost=0;
		scanf("%d",&N);
		while(N--){
			scanf("%d",&callDuration);
			callDuration++;
			mileCost+=ceil(callDuration/30.0)*10;
			//printf("mileCOst: %d\n",mileCost);
			juiceCost+=ceil(callDuration/60.0)*15;
			//printf("juiceCost: %d\n",juiceCost);
		}
		printf("Case %d: ",i);
		if(mileCost==juiceCost){
			printf("Mile Juice %d",mileCost);
		}else{
			if(mileCost<juiceCost){
				printf("Mile %d",mileCost);
			}else{
				printf("Juice %d",juiceCost);
			}
		}
		printf("\n");
	}
	//fclose (stdout);
	//system("gedit \"output.txt\"");
	return 0;
}
