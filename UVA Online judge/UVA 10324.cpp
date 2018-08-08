#include<iostream>
using namespace std;

int main(){
	string str;
	int n,i,j,counter=0,temp;
	bool flag;
	while(cin>>str){
		cin>>n;
		cout<<"Case "<<++counter<<":"<<endl;
		while(n--){
			flag=true;
			cin>>i>>j;
			if(i==j){
				goto print;
			}else if(i>j){
				i=i^j;
				j=i^j;
				i=i^j;
			}
			temp=str[i++];
			while(i<=j){
				if(str[i]!=temp)
					flag=false;
				temp=str[i++];
			}
	print:  printf(flag?"Yes\n":"No\n");
			
		}
	}
	return 0;
}
/*
 * Ouptut Format
 * Case 1:
 * No
 * Yes
 * Yes
 */
