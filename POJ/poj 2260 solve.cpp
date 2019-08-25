#include<cstdio>
#include<iostream>

#define MAX_LEN 100

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	
	int n, m[MAX_LEN][MAX_LEN],oddRow, oddCol,
	 changeRow, changeCol,
	 sumRow, sumCol;

	while(scanf("%d",&n),n!=0){
		oddRow=0;
		oddCol=0;

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&m[i][j]);
			}
		}

		for(int i=0;i<n;i++){
			sumRow=0;
			sumCol=0;

			for(int j=0;j<n;j++){
				sumRow+=m[i][j];
				sumCol+=m[j][i];
			}//loop for every j finshed

			//if row odd
			if(sumRow&1){
				oddRow++;
				changeRow=i;
			}
			//if col odd
			if(sumCol&1){
				oddCol++;
				changeCol=i;
			}

		}//loop for every i finshed
		if(oddRow==0 && oddCol==0){
			printf("OK\n");
		}else if(oddRow==1 && oddCol==1){
			printf("Change bit (%d,%d)\n",changeRow+1, changeCol+1 );
		}else{
			printf("Corrupt\n");
		}
	} 

	return 0;
}
