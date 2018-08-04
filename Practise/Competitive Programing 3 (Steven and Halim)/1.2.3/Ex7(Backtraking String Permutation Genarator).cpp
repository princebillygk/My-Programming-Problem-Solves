#include<iostream>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;

class mystr{
	string str;
	void genarateCombinationHelper(string str, string chosen="");
	public:
		void getString(){
				cin>>str;
			}
		void genarateCombination(){
				string temp=str;
				genarateCombinationHelper(str);
			}
};

int main(){
		mystr str;
		cout<<"Enter String(No spaces Please):\n";
		str.getString();
		cout<<"\nCombinations: \n";
		str.genarateCombination();
		return 0;
}

void mystr::genarateCombinationHelper(string str, string chosen ){
	char choice;
	//if/else
	if(str.empty()){
			cout<<chosen<<"\t";
		}else{
			//for/choice/explore/unchose
			for(int i=0;i<(signed)str.length();i++){
				choice=str[i];
				chosen+=choice;
				str.erase(i,1);
				//explore
				genarateCombinationHelper(str,chosen);
				//unchose
				str.insert(i,1,choice);
				chosen.erase(chosen.length()-1,1);					
				}			
		}
}

