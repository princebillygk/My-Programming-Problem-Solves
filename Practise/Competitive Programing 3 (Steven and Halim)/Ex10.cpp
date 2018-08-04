#include<iostream>
#include<cstdio>
#include<cstring>
#include<sstream>
using namespace std;

int main(){
	//freopen("input.txt","r",stdin);
	char temp[100];
	stringstream ss;	
	cout<<"Enter String:"<<endl;
	while(scanf("%s",temp)!=EOF){
	if(strlen(temp)==3){
			if(temp[0]>='a' && temp[0]<='z' &&
			   temp[1]>='0' && temp[1]<='9' && 
			   temp[2]>='0' && temp[2]<='9')
				   strcpy(temp,"***");
				   
		}
	ss<<temp<<" ";
	}
	cout<<ss.str();
	return 0;
	}
