#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	//freopen("output.txt","w",stdout);
	int T,W,y1,y2,gap;
	bool flag;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&W);
		scanf("%d %d",&y1,&y2);
		gap=abs(y1-y2);
		flag=true;
		W--;
		while(W--){
			scanf("%d %d",&y1,&y2);
			if(abs(y1-y2)!=gap)
				flag=false;
		}
		printf(flag?"yes\n":"no\n");
		if(T){
			cout<<endl;
		}
	}
	//fclose(stdout);
	//system("gedit output.txt");
	return 0;
}
