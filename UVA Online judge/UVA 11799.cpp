#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int T,N,speed,maxSpeed;
	scanf("%d",&T);
	for(int i=1;i<=T;i++){
		maxSpeed=0;
		scanf("%d",&N);
		while(N--){
			scanf("%d",&speed);
			if(speed>maxSpeed)
				maxSpeed=speed;
		}
		printf("Case %d: %d\n",i,maxSpeed);
	}
	return 0;
}
