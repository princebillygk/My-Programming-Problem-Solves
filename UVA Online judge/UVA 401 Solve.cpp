#include<iostream>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	string str;
	int length;
	bool palindrome_flag,mirror_flag;
	while(getline(cin,str)){
	 	// cout<<str<<endl<<"length: "<<length<<endl;
	 	//*/
	 	palindrome_flag=true;
	 	length=str.length();
	 	if(length&1){
	 		//cout<<"odd"<<endl;
	 		//code for odd string length goes
	 		for(int i=0;i<=length/2;i++){
	 			if(str[i]!=str[length-i-1]){
	 				palindrome_flag=false; //if double index character not matched
	 			}
	 		}
	 	}else{
	 		//cout<<"even"<<endl;
	 		//code for even sting length goes
	 		for(int i=0;i<=length/2-1;i++){
	 			if(str[i]!=str[length-i-1]){
	 				palindrome_flag=false; //if double index character not matched
	 			}
	 		}
	 	}
	 	if(palindrome_flag){
 			cout<<"Palindrome"<<endl;
	 	}
	 	else{
	 			cout<<"Not Palindrome"<<endl;
	 	}
	 	
	}

	return 0;
}