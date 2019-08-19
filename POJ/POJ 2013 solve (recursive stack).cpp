#include<cstdio>
#include<iostream>

using namespace std;

void func(int);


int main(){
	/*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n,set=1;
	char names[20][30];

	while(scanf("%d",&n),n){
		printf("SET %d\n",set++ );
		func(n);
	}
	
	return 0;
}

void func(int n){
	char name[30];
	scanf("%s",name);
	printf("%s\n",name);
	if(--n){
		scanf("%s",name);
		if(--n)
			func(n);
		printf("%s\n",name);
	}
}