#include<cstdio>
#include<iostream>
#include<cstdlib>


using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int coef[10],co;
	bool flag;
	while(scanf("%d %d %d %d %d %d %d %d %d", &coef[0], &coef[1], &coef[2], &coef[3],
	 &coef[4], &coef[5], &coef[6], &coef[7], &coef[8])!=EOF){
		flag=false;
		for(int i=0;i<9;i++){
			if ( coef[i]!=0){
				
				//ig it is start and sign is negative
				if(!flag){
					if(coef[i]<0) printf("-");
				}

				//if it is not the start display the sign
				if(flag){
					if(coef[i]>0)
						printf(" + ");
					else
						printf(" - ");
				}

				//print the coef if needed
				co= abs(coef[i]);
				if(co!=1 || i==8){
					printf("%d",co);
				}

				//print x if needed	
				if(i<8){
					printf("x");
				}

				if(i<7){
					printf("^%d",8-i);
				}
				flag=true;
			}
		}
		if(flag)
			printf("\n");
		else
			printf("0\n");
	} 

	return 0;
}
