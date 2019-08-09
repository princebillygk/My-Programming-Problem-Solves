#include<cstdio>
#include<iostream>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	char temp;
	int nCharEach[26],max=0,currIndex,nLine=0;
	for(int i=0;i<26;i++) nCharEach[i]=0;
	while(temp=getchar()){
		//printf("%c",temp );
		if(temp=='\n')
			nLine++;	
		if(nLine>=4) break;
		currIndex=temp-'A';
		if(temp<'A' || temp> 'Z') continue;
		if(++nCharEach[currIndex]>max)
			max=nCharEach[currIndex];
		//cout<<currIndex<<endl;

	}
	//cout<<max<<endl;
	for(int i=max;i>0;i--){
		for(int j=0;j<26;j++){
			if(nCharEach[j]>=max)
				printf("* ");
			else
				printf("  ");
		}
		max--;
		printf("\n");
	}
	for(int i='A';i<='Z';i++){
		printf("%c ",i);
	}
	/*
	for(int i='A';i<='Z';i++){
		printf("%d ",nCharEach[i-'A']);
	}
	//*/
	printf("\n");
	return 0;
}