#include<bits/stdc++.h>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	
	int n,m,nadj,counter=0;
	/* 
	* n 		number of mins row
	* m 		number of mins colum
	* nadj 		to store number of adjacent node for each index
	* counter 	count the number Case init = 0
	*/
	char mins[100][100],temp;

	while(scanf("%d %d",&n,&m),(n||m)){ //do until n=m!=0
		//--taking inputs--
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){
				if((temp=getchar())!='\n'){
					mins[i][j]=temp;
				}else j--;
			}
		if(counter>0) printf("\n");
		printf("Field #%d:\n",++counter); //output
		//--accessing each at a time and  genarate result--
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				//printf("%c",mins[i][j]);
				if (mins[i][j]=='*')
					printf("*");
				else{
					nadj=0;
					for(int p=i-1;p<=i+1;p++){ //loop adjacent row
						for(int q=j-1;q<=j+1;q++){
							if(p>=0 && p<n && q>=0 && q<m)
								if(mins[p][q]=='*') nadj++;
						}
					}printf("%d",nadj);
				}				
			}printf("\n");
		}
	}
	return 0;
}