#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	//freopen("output.txt","w",stdout);
	int T,oldSize,newSize;
	bool flag;
	scanf("%d",&T);
	printf("Lumberjacks:\n");
	while(T--){
		flag=true;
		scanf("%d %d",&oldSize,&newSize);
		if(newSize==oldSize){
			//printf("newSize==oldSize\n");
			flag=false;
		}else if(newSize>oldSize){
			//printf("newSize>oldSize\n");
			oldSize=newSize;
			for(int i=2;i<10;i++){
				scanf("%d",&newSize);
				if(newSize<oldSize){
					flag=false;
				}
				oldSize=newSize;
				//printf("Flag: %s\n",flag?"true":"false");
			}
		}else{
			//printf("newSize<oldSize\n");
			oldSize=newSize;
			for(int i=2;i<10;i++){
				scanf("%d",&newSize);
				if(newSize>oldSize){
					flag=false;
				}
				oldSize=newSize;
				//printf("Flag: %s",flag?"true":"false");
			}
		}
		printf(flag?"Ordered\n":"Unordered\n");
	}
	return 0;
}
