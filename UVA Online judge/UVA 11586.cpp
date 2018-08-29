#include<iostream>
using namespace std;

int main(){
	//freopen("output.txt","w",stdout);
	int T,male,female;
	char c;
	cin>>T;
	cin.ignore();
	while(T--){
		female=male=0;
		while((c=getchar())!='\n'){
			if(c=='M')
				male++;
			else if(c=='F')
				female++;
		}
		(male==female && male!=1)?cout<<"LOOP"<<endl:cout
		<<"NO LOOP"<<endl;		
	}
	//fclose(stdout);
	//system("gedit output.txt");
	return 0;
}
