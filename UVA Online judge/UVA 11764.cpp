#include<iostream>
using namespace std;

int main(){
	int T,N,hb,ha,highJump,lowJump;
	scanf("%d",&T);	
	for(int i=1;i<=T;i++){
		highJump=0;
		lowJump=0;
		scanf("%d",&N);
		scanf("%d",&ha);
		while(--N){
			hb=ha;
			scanf("%d",&ha);
			if(ha>hb)
				highJump++;
			else if(ha<hb)
				lowJump++;
		}
		printf("Case %d:  %d %d\n",i,highJump,lowJump);
	}
	return 0;
}
