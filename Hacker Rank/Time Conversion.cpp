#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int h12,min12,sec12,h24;
	char flag;
	scanf("%d:%d:%d%cx",&h12,&min12,&sec12,&flag);
	if(flag=='a'||flag=='A'){
		if(h12==12)
			h24=0;
		else h24=h12;
	}else{
		if(h12==12)
			h24=12;
		else h24=h12+12;
	}
	printf("%02d:%02d:%02d\n",h24,min12,sec12);
	return 0;
}
