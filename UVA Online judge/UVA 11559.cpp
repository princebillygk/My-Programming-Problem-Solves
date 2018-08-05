#include<iostream>
using namespace std;
int main(){
	int N,B,H,W,bedPerWeek;
	int costPerHotel,minCostPerHotel,totalCost;
	while(scanf("%d %d %d %d",&N,&B,&H,&W)!=EOF){
		minCostPerHotel=10000;
		while(H--){
			scanf("%d",&costPerHotel);
			for(int i=0;i<W;i++){
				scanf("%d",&bedPerWeek);
				if(N<=bedPerWeek){
					if(minCostPerHotel>costPerHotel)
						minCostPerHotel=costPerHotel;
				}
				//printf("Min Cost: %d\n",minCostPerHotel);
				//printf("Week: %d\n",W);
			}
			//printf("Hotel: %d\n",H);
		}
		totalCost=minCostPerHotel*N;
		//printf("Total Cost: %d\n",totalCost);
		(totalCost>B)?printf("stay home\n"):printf("%d\n",totalCost);
	}
	return 0;
}
