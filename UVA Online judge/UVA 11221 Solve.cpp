#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	string str;
	char mid;
	int length,start,end,count,alphabet,testCase,Case=0,root;
	bool palindrome_flag,mirror_flag;
	cin>>testCase;
	cin.ignore();
	while(getline(cin,str) && testCase--){
		count=0;
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
	 		count++;
	 	}
	 	alphabet=count*2; //souble the value of left side and write side 
	 	//this is the final number of alphabet if it is not 1 or odd
	 	if(
	 		(
		 		start!=end+1 && //helps to count the number of alphabet when it is odd
		 		(
		 			(str[start+1]>='a' && str[start+1]<='z') ||
		 			(str[start+1]>='A' && str[start+1]<='Z')
		 		)
		 	 ) ||
	 		 (
		 		start==end && //helps to count the number of alphabet when it is 1
		 		(
		 			(str[start]>='a' && str[start]<='z') ||
		 			(str[start]>='A' && str[start]<='Z')
		 		)
		 	 )

	 	   ){
	 		alphabet++; //increment 1 to get the correct value of alphabet number
	 	}
	 	if(alphabet>1) root=sqrt(alphabet);
	 	else root=1; //sqrt function doesn't work properly when it the argument is 1  
	 	//cout<<alphabet<<" "<<root<<endl;
	 	cout<<"Case #"<<++Case<<":"<<endl;
	 	if(root*root==alphabet && palindrome_flag) //check if the number of alphabet is squreroot and the strings are palindrome
	 		cout<<root<<endl;
	 	else
	 		cout<<"No magic :("<<endl;

	}
	return 0;
}