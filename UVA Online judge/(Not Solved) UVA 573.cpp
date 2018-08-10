#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	//freopen("output.txt","w",stdout);
	int H,U,D,F,day;
	double change;
	bool success,flag;
	/*
	 * H= height
	 * U=ability
	 * D=slideInNight
	 * F=fatigueFactor
	 */
	while(scanf("%d %d %d %d",&H, &U, &D, &F),H){
		if(U==0){
			flag=false;
		}
		else
			flag=true;
		day=0;
		change=0;
		success=false;
		while(flag){
			day++;
			change+=U*(1.0-(day-1.0)*F/100.0)-D;
			/*printf("\n-------------------\nchange: %f on day: %d\
			\n-------------------\n",change,day);*/
			if(change>=H){
				success=true;
				break;
			}else if(change<0){
				break;
			}
		}
		printf(success?"success on day %d\n"
		:"failure on day %d\n",day);
	}
	//fclose(stdout);
	//system("gedit output.txt");
	return 0;
}
/*
 * Ouput Format:
 * success  on  day  3
 * failure  on  day  4
 */
 

