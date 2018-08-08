#include<iostream>
using namespace std;

int main(){
	freopen("output.txt","w",stdout);
	int N,M,capacityOfFuses,consumptionOfDevices[20],deviceId,
	maxConsumption,currentTotalConsumption,counter=0;
	bool flag;
	while(cin>>N>>M>>capacityOfFuses,(N||M||capacityOfFuses)){
		currentTotalConsumption=0;
		maxConsumption=0;
		flag=true;
		for(int i=0;i<N;i++){
			cin>>consumptionOfDevices[i];
		}
		while(M--){
			cin>>deviceId;
			deviceId--;
			if(flag){
				consumptionOfDevices[deviceId]*=-1;
				//cout<<"Device Consumption: "
				//<<consumptionOfDevices[deviceId]<<endl;
				currentTotalConsumption-=consumptionOfDevices[deviceId];
				//cout<<"currentTotalConsumption: "
				//<<currentTotalConsumption<<endl;
				if(currentTotalConsumption>capacityOfFuses)
					flag=false;
				else if(maxConsumption<currentTotalConsumption)
					maxConsumption=currentTotalConsumption;
			}
		}
		cout<<"Sequence "<<++counter<<endl;
		if(flag)
			cout<<"Fuse was not blown."<<endl<<
				"Maximal power consumption was "<<maxConsumption<<
				" amperes."<<endl;

		else
			cout<<"Fuse was blown."<<endl;	
		cout<<endl;	
	}
	fclose(stdout);
	system("geany output.txt");
	return 0;
}
/*
 * Sample Output
	Sequence·1
	Fuse was blown.
	Sequen e 2
	Fuse was not blown.
	Maximal power consumption was 9 amperes.
 *
 */ 
