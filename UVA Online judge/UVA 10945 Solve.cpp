#include<iostream>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	string str;
	char mid;
	int length,start,end;
	bool palindrome_flag,mirror_flag;
	while(getline(cin,str) && str!="DONE"){
		palindrome_flag=true;
	 	//cout<<str<<endl<<"length: "<<str.length()<<endl;
	 	start=0; end=str.length();
	 	while(start<=end){
	 		while( //check if if str[start] is a alphabet
		 			(
		 				str[start]<'A'|| //It can be less than A
		 				str[start]>'z'|| //It can be greater than z
		 				(
		 					str[start]>'Z' && //it can be between Z-a
		 					 str[start]<'a'
		 				)

		 			) && 
		 			start<=end //until we finished reading all the characters
		 		){
	 			start++; //skip the character if not alphabet
	 		}

	 		while( //check if if end is a alphabet
		 			(
		 				str[end]<'A'|| //It can be less than A
		 				str[end]>'z'|| //It can be greater than z
		 				(
		 					str[end]>'Z' && //it can be between Z-a
		 					 str[end]<'a'
		 				)
		 			) && 
		 			start<=end //until we finished reading all the characters
		 		){
	 			end--; //skip the character if not alphabet
	 		}
	 		if(start>=end) break; 
	 		//close loop if we already have read all the charracters

	 		//cout<<"comparing "<<str[start]<<" & "<<str[end]<<endl;
	 		if(
	 			str[start]!=str[end] &&
	 			str[start]!=str[end]-'A'+'a' &&
	 			str[start]-'A'+'a'!= str[end]
	 		  ){
	 			//cout<<"not ok"<<endl;
	 			palindrome_flag=false;
	 			break;
	 		}
	 		start++;
	 		end--;
	 	}
		if(palindrome_flag)
			cout<<"You won't be eaten!"<<endl;
		else
			cout<<"Uh oh.."<<endl;

	}
	return 0;
}