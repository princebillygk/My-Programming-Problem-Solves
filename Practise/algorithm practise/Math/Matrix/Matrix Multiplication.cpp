#include<bits/stdc++.h>
#define Max_LEN 100
using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int A[Max_LEN][Max_LEN], B[Max_LEN][Max_LEN], C[Max_LEN][Max_LEN], m, n, p;
	

	//if A[m*n]  B[n*p] then C[m*p]
	//Input m, n, p
	scanf("%d %d %d",&m, &n, &p);

	//input A[m*n]
	for(int i=0;i<m ;i++){
		for( int j=0; j<n; j++ ){
			scanf("%d",&A[i][j]);
		}
	}

	//input B[n*p]
	for(int i=0;i<n ;i++){
		for( int j=0; j<p; j++ ){
			scanf("%d",&B[i][j]);
		}
	}

	//genrate and print C
	for(int i=0; i<m;i++){
		for (int j=0;j<p;j++){
			C[i][j]=0; //init
			for(int k=0; k<n; k++){
				C[i][j]+=A[i][k]*B[k][j]; //genarate
			}
			printf("%d ",C[i][j]); //debug-optional
		}
		printf("\n"); //debug-optional
	}	

	//TIME COMPLEXIETY (M*N*P)
	printf("Number of Steps: %d\n", m*n*p);
	//NUMBER OF MULTPLICATION (M*N*P)
	return 0;
}
