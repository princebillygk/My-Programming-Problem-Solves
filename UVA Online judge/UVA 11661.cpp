#include<iostream>
#include<climits>
#include<cstdio>
using namespace std;

int main(){
	int L,distance,minDistance;
	char c,origin;
	bool done,flag;
	while(scanf("%d",&L),L){
		done=flag=false;
		minDistance=INT_MAX;
		cin.ignore();
		while((c=getchar())!='\n'){
			if(!done){
				if(c=='Z'){
				minDistance=0;
				done=true;
				}else if(c=='.'){
					distance++;
				}else if(c=='R'){
					if(!flag){
						flag=true;
						origin='R';
						distance=0;
					}else if(flag){
						if(origin=='R')
							distance=0;
						else{
							distance++;
							if(distance<minDistance)
								minDistance=distance;
							origin='R';
							distance=0;
						}
					}
				}else if(c=='D'){
					if(!flag){
						flag=true;
						origin='D';
						distance=0;
					}else if(flag){
						if(origin=='D')
							distance=0;
						else{
							distance++;
							if(distance<minDistance)
								minDistance=distance;
							origin='D';
							distance=0;
						}
					}
				}
					
			}
		}
		printf("%d\n",minDistance);
	}
	return 0;
}
