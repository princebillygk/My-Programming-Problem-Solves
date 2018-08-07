#include<iostream>
#include<cfloat>
using namespace std;
int main(){
	freopen("output.txt","w",stdout);
	int N,P,met,highestMet,tracker,counter=0;
	double price,lowestPrice;
	string dump;
	//string DONE="-----\nDONE\nDONE\nDONE\n-----\n";
	/*
	 * N=theNumberOfRequirements
	 * P=numberOfProposal
	*/
	while(cin>>N>>P,(N||P)){
		lowestPrice=DBL_MAX;
		highestMet=0;
		tracker=0;
		string proposals[P];
		cin.ignore();
		for(int i=0;i<N;i++){
				getline(cin,dump);
		}
		//cout<<DONE;
		for(int i=0;i<P;i++){
			getline(cin,proposals[i]);
			cin>>price>>met;
		//cout<<DONE;
		//cout<<proposals[i]<<" "<<price<<" "<<met<<endl;
			if(met>highestMet){
				highestMet=met;
				lowestPrice=price;
				tracker=i;
			}else if(met==highestMet && price<lowestPrice ){
				lowestPrice=price;
				tracker=i;
			}
			cin.ignore();
			while(met--){
				getline(cin,dump);
			}
		//cout<<DONE;
		}
		if(counter){
			cout<<endl;
		}
		cout<<"RFP #"<<++counter<<endl;
		cout<<proposals[tracker]<<endl;
		/*
		 * Ouput Format: 
		 * RFP #1
		 * Cadillac
		*/
	}
	fclose(stdout);
	system("gedit output.txt");
	return 0;
}
