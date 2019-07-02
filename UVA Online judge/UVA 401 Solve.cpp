#include<iostream>

using namespace std;

int main(){
	/*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	string str;
	char mid;
	int length;
	bool palindrome_flag,mirror_flag;
	while(getline(cin,str)){
	 	// cout<<str<<endl<<"length: "<<length<<endl;
	 	//*/
	 	palindrome_flag=true;
	 	mirror_flag=true;
	 	length=str.length();
	 	if(length&1){
	 		//cout<<"odd"<<endl;
	 		//code for odd string length goes
	 		for(int i=0;i<length/2;i++){
	 			if(str[i]!=str[length-i-1]){
	 				palindrome_flag=false; //if double index character not matched
	 			}
	 		}
	 		mid=length/2;
	 		//cout<<str[mid]<<endl;
	 		//*/
	 		if(			//check if the middle charrector is mirror of it self
	 		   str[mid]=='A'||str[mid]=='H'||str[mid]=='I'||
	 		   str[mid]=='M'||str[mid]=='O'||str[mid]=='T'||
	 		   str[mid]=='U'||str[mid]=='V'||str[mid]=='W'||
	 		   str[mid]=='X'||str[mid]=='Y'||str[mid]=='1'||
	 		   str[mid]=='8'
	 		   ){
		 		for(int i=0;i<=length/2;i++){
		 				if(!(
		 					((str[i]=='A') && (str[length-i-1]=='A'))||
							((str[i]=='H') && (str[length-i-1]=='H'))||
							((str[i]=='I') && (str[length-i-1]=='I'))||
							((str[i]=='M') && (str[length-i-1]=='M'))||
							((str[i]=='O') && (str[length-i-1]=='O'))||
							((str[i]=='T') && (str[length-i-1]=='T'))||
							((str[i]=='U') && (str[length-i-1]=='U'))||
							((str[i]=='V') && (str[length-i-1]=='V'))||
							((str[i]=='W') && (str[length-i-1]=='W'))||
							((str[i]=='X') && (str[length-i-1]=='X'))||
							((str[i]=='Y') && (str[length-i-1]=='Y'))||
							((str[i]=='1') && (str[length-i-1]=='1'))||
							((str[i]=='8') && (str[length-i-1]=='8'))||
							((str[i]=='E') && (str[length-i-1]=='3'))||
							((str[i]=='3') && (str[length-i-1]=='E'))||
							((str[i]=='J') && (str[length-i-1]=='L'))||
							((str[i]=='L') && (str[length-i-1]=='J'))||
							((str[i]=='S') && (str[length-i-1]=='2'))||
							((str[i]=='2') && (str[length-i-1]=='S'))||
							((str[i]=='Z') && (str[length-i-1]=='5'))||
							((str[i]=='5') && (str[length-i-1]=='Z'))
						)){
							//cout<<str[i]<<"!="<<str[length-i-1]<<endl; 
							mirror_flag=false;
						}
					}
			}else{
				//cout<<str[mid]<<endl;
				mirror_flag=false;
			}	
			//*/
	 	}else{
	 		//cout<<"even"<<endl;
	 		//code for even sting length goes
	 		for(int i=0;i<=length/2-1;i++){
	 			if(str[i]!=str[length-i-1]){
	 				palindrome_flag=false; //if double index character not matched
	 			}
	 		}
	 		for(int i=0;i<=length/2;i++){
	 				if(!(
	 					((str[i]=='A') && (str[length-i-1]=='A'))||
						((str[i]=='H') && (str[length-i-1]=='H'))||
						((str[i]=='I') && (str[length-i-1]=='I'))||
						((str[i]=='M') && (str[length-i-1]=='M'))||
						((str[i]=='O') && (str[length-i-1]=='O'))||
						((str[i]=='T') && (str[length-i-1]=='T'))||
						((str[i]=='U') && (str[length-i-1]=='U'))||
						((str[i]=='V') && (str[length-i-1]=='V'))||
						((str[i]=='W') && (str[length-i-1]=='W'))||
						((str[i]=='X') && (str[length-i-1]=='X'))||
						((str[i]=='Y') && (str[length-i-1]=='Y'))||
						((str[i]=='1') && (str[length-i-1]=='1'))||
						((str[i]=='8') && (str[length-i-1]=='8'))||
						((str[i]=='E') && (str[length-i-1]=='3'))||
						((str[i]=='3') && (str[length-i-1]=='E'))||
						((str[i]=='J') && (str[length-i-1]=='L'))||
						((str[i]=='L') && (str[length-i-1]=='J'))||
						((str[i]=='S') && (str[length-i-1]=='2'))||
						((str[i]=='2') && (str[length-i-1]=='S'))||
						((str[i]=='Z') && (str[length-i-1]=='5'))||
						((str[i]=='5') && (str[length-i-1]=='Z'))
					)){
						//cout<<str[i]<<"!="<<str[length-i-1]<<endl; 
						mirror_flag=false;
					}
			}	

	 	}
	 	if(palindrome_flag && mirror_flag){
	 		cout<<str<<" -- is a mirrored palindrome."<<endl;
	 	}else if(palindrome_flag && !mirror_flag){
	 		cout<<str<<" -- is a regular palindrome."<<endl;
	 	}else if(!palindrome_flag && mirror_flag){
	 		cout<<str<<" -- is a mirrored string."<<endl;
	 	}else{
	 		cout<<str<<" -- is not a palindrome."<<endl;
	 	}
	 	cout<<endl;
	}

	return 0;
}