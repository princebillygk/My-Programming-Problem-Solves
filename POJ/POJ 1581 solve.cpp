#include<cstdio>
#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	

	char cTeam[256],winTeam[256];
	int nTeam,cSolve,cPenalty,maxSolve,minPenalty,tempNSubmission,tempTime;
	/*
	 * c* - stands for current
	 * win* winner team
	 * n* - stands for number of
	 * temp* - used for temporary varriable
	 */
	scanf("%d", &nTeam);
	maxSolve=-1;minPenalty=INT_MAX;
	while(nTeam--){
		cSolve=0;
		cPenalty=0;
		scanf("%s",cTeam);
		for(int i=0; i<4;i++){
			scanf("%d %d",&tempNSubmission,&tempTime);
			if(tempTime!=0){
				cSolve++;
				cPenalty+=(tempTime+(tempNSubmission-1)*20);
			}
			//printf(" = %s %d %d\n",cTeam,cSolve,cPenalty);
		}
		if(cSolve>maxSolve || (cSolve==maxSolve && minPenalty>cPenalty)){
			maxSolve=cSolve;
			minPenalty=cPenalty;
			strcpy(winTeam,cTeam);
		}
	}
	printf("%s %d %d\n",winTeam,maxSolve,minPenalty);
	return 0;
}