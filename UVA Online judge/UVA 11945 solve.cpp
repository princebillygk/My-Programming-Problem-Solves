#include<bits/stdc++.h>

using namespace std;

void withComma(double money);

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int nCase; //number of Cases
	double total, eachMonth,avg;
	/*
	 * total: store the total money
	 * eachMonth: store each input
	 * avg: store average
	 */ 
	scanf("%d",&nCase);
	for(int i=1;i<=nCase;i++){
		total=0;
		for (int j=0;j<12;j++){
				scanf("%lf",&eachMonth);
				total+=eachMonth;
		}
		avg=total/12.0;
		printf("%d ", i);
		withComma(avg);
		printf("\n");
		//printf("%lf\n",avg );
	}
	return 0;
}

void withComma(double moneyfloat){
	unsigned long int  money,loop=0,i; 
	char *result, temp[50];
	money=round(moneyfloat*100);
	for (i=0;i<2;i++)
	{
		temp[i]=money%10+'0';
		money/=10;
	}
	temp[i++]='.';
	while(money){
		temp[i]=money%10+'0';
		money/=10;
		i++;
		if(++loop==3 and money!=0){
			loop=0;
			temp[i]=',';
			i++;
		}
	}
	temp[i++]='$';
	while(i--)
		putchar(temp[i]);
}