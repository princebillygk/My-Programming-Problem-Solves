#include<cstdio>
#include<iostream>
#include<cmath>

using namespace std;

char box[729][729];

void boxFactorial(int n, int x, int y);

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n;
	while(scanf("%d",&n),n>=0){
		for(int i=0;i<pow(3,n-1);i++){
			for(int j=0;j<pow(3,n-1);j++){
				box[i][j]=' ';
			}
		}

		boxFactorial(n,0,0);

		for(int i=0;i<pow(3,n-1);i++){
			for(int j=0;j<pow(3,n-1);j++){
				printf("%c",box[i][j]);
			}
			printf("\n");
		}
		
		printf("\n-\n");
	}
	
	return 0;
}

void boxFactorial(int n, int x, int y){
	if (n==1){
		box[x][y]='X';
	}else{
		boxFactorial(n-1,x,y);
		boxFactorial(n-1,x,y+2*pow(3,n-2));
		boxFactorial(n-1,x+pow(3,n-2),y+pow(3,n-2));
		boxFactorial(n-1,x+2*pow(3,n-2),y);
		boxFactorial(n-1,x+2*pow(3,n-2),y+2*pow(3,n-2));

	}
	
}
