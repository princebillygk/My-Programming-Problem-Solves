#include<bits/stdc++.h>

using namespace std;

int main(){
    //*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	long long int year,male,female,bee, tempBee, tempMale,tempFemale;
	while(scanf("%lld",&year),year>-1){
		female=1;
		male=0;
		bee=female+male;
		for(long long int i=0;i<year;i++){
			tempBee=bee;
			tempMale=male;
			tempFemale=female;
			male=tempBee;
			female=tempMale+1;
			bee=male+female;
		}
		printf("%lld %lld\n",male,bee );
	}
	return 0;
}