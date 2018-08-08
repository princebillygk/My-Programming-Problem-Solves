#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	//freopen("output.txt","w",stdout);
	int pointer,led[100],T;
	char c;
	scanf("%d",&T);
	cin.ignore();
	for(int k=1;k<=T;k++){
		for(int i=0;i<100;i++){
			led[i]=0;
		}
		pointer=0;
		while((c=getchar())!='\n'){
			if(c=='>'){
				if(pointer==99)
					pointer=0;
				else
					pointer++;
			}else if(c=='<'){
				if(pointer==0)
					pointer=99;
				else
					pointer--;
			}
			else if(c=='+'){
				if(led[pointer]==0xFF)
					led[pointer]=0x00;
				else
					led[pointer]++;
			}else if(c=='-'){
				if(led[pointer]==0x00)
					led[pointer]=0xFF;
				else
					led[pointer]--;
			}
		}
		printf("Case %d:",k);
		for(int i=0;i<100;i++){
			printf(" %02X",led[i]);
		}
		printf("\n");
	}
	//fclose(stdout);
	//system("geany output.txt");
	return 0;
}
