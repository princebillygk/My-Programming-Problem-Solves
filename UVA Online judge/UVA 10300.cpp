#include<iostream>
using namespace std;

int main(){
	freopen("output.txt","w",stdout);
	int T,totalPremium,sizeOfFarm,numOfAnimal,envFr,numOfFarmer;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&numOfFarmer);
		totalPremium=0;
		while(numOfFarmer--){
			scanf("%d %d %d",&sizeOfFarm,&numOfAnimal,&envFr);
			totalPremium+=sizeOfFarm*envFr;
		}
		cout<<totalPremium<<endl;
	}
	fclose(stdout);
	system("gedit output.txt");
	return 0;
}
