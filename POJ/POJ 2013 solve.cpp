#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	/*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n,set=1;
	char names[20][30];

	while(scanf("%d",&n),n){
		for(int i=0;i<n;i++){
			scanf("%s",names[i]);
		}
		printf("SET %d\n",set++ );
		for(int i=0;i<n;i+=2){
			printf("%s\n",names[i]);
		}
		if(n&1){
			for(int i=n-2;i>0;i-=2){
				printf("%s\n",names[i]);
			}
		}else{
			for(int i=n-1;i>0;i-=2){
				printf("%s\n",names[i]);
			}
		}
	}
	
	return 0;
}