#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int day, people,temp, attend[100];
	bool flag;
	while(scanf("%d %d",&people,&day),(people||day)){
		flag=0;
		for(int i=0;i<people;i++){
			attend[i]=0;
		}
		for(int i=0;i<day;i++){
			for(int j=0; j<people;j++){
				scanf("%d",&temp);
				attend[j]+=temp;
				//cout<<attend[j]<<endl;
			}
		}
		for(int i=0;i<people;i++){
			//cout<<attend[i]<<" ";
			if(attend[i]==day){
				flag=1;
				printf("yes\n");
				break;
			}
		}
		if(!flag)
			printf("no\n");
		//cout<<endl;

	}
	
	return 0;
}