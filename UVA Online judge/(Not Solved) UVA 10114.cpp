#include<iostream>
using namespace std;

int main(){
	int month, numberOfDepreciation,currentMonth,ans;
	double loan, downPayment, monthly,depreceation,currentCost,
	currentOwe;
		while(scanf("%d %lf %lf %d",&month,&downPayment,&loan,
		&numberOfDepreciation),(month>=0)){
			currentMonth=0;
			ans=0;
			currentCost=loan+downPayment;
			currentOwe=loan;
			monthly=loan/month;
			while(numberOfDepreciation--){
				scanf("%d",&month);
				if(month!=0 && month>currentMonth){
					while(month>currentMonth++){
						currentCost*=(1-depreceation);
						currentOwe-=monthly;
						if(currentCost<currentOwe){
							ans++;
						}
						printf("currentCost: %lf\ncurrentOwe: %lf\n",
						currentCost,currentOwe);
					}
					currentMonth--;
				}
				scanf("%lf",&depreceation);
				currentCost*=(1-depreceation);
				currentOwe-=monthly;
				if(currentCost<=currentOwe){
					ans++;
				}
				currentMonth++;
				printf("currentCost: %lf\ncurrentOwe: %lf\n",
				currentCost,currentOwe);
			}
			(++ans>1)?printf("%d months\n",ans)
			:printf("%d month\n",ans);
			
		}
	return 0;
}
