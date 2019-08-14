#include<iostream>
#include<cstdio>
#include<climits>
#include<cmath>
using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n, speed, time,arivalTime, minArivalTime;
	while(scanf("%d",&n), n){
		minArivalTime=INT_MAX;
		while(n--){
				scanf("%d %d",&speed, &time);
				if(time>=0){
				arivalTime=ceil(time+4.5*3600.00/speed);
					if(arivalTime<minArivalTime){
						minArivalTime=arivalTime;
					} 
				}
		}
		printf("%d\n",minArivalTime );
	}
	return 0;
}