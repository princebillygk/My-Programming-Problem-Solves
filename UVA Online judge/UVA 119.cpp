#include<iostream>
using namespace std;

int main(){
	//freopen("output.txt","w",stdout);
	struct fr{
		string name;
		int money;
	};
	int numberOfFriends,moneyGiven,numberOfGivenFriends,moneyPerPerson,
	counter=0;
	fr friends[10];
	string giver,givenFriend;
	while(cin>>numberOfFriends){
		for(int i=0;i<numberOfFriends;i++)
			friends[i].money=0;
		for(int i=0;i<numberOfFriends;i++)
			cin>>friends[i].name;
		for(int i=0;i<numberOfFriends;i++){
			cin>>giver>>moneyGiven>>numberOfGivenFriends;
			for(int j=0;j<numberOfFriends;j++){
				if(friends[j].name==giver){
					if(numberOfGivenFriends){
						friends[j].money-=
						(moneyGiven-moneyGiven%numberOfGivenFriends);
					}
			      //cout<<friends[j].name<<" "<<friends[j].money<<endl;
					break;
				}
			}
			if(numberOfGivenFriends)
				moneyPerPerson=moneyGiven/numberOfGivenFriends;
			else
				moneyPerPerson=0;
			for(int j=0;j<numberOfGivenFriends;j++){
				cin>>givenFriend;
				if(moneyPerPerson){
					for(int k=0;k<numberOfFriends;k++){
						if(friends[k].name==givenFriend){
							friends[k].money+=moneyPerPerson;
						  //cout<<friends[k].name<<" "<<friends[k].money
						  //<<endl;
							break;
						}
					}
				}
			}
		}
		if(counter++)
			cout<<endl;
		for(int i=0;i<numberOfFriends;i++)
			cout<<friends[i].name<<" "<<friends[i].money<<endl;
	}
	//fclose(stdout);
	//system("gedit output.txt");
	return 0;

}
dsfdfsdfffffffffffffffffffffffffffffffffffwdjifjasidfhsndfgvashfdijgvnsifhvasndvnhfsiuvnsidfviudsnfvn
