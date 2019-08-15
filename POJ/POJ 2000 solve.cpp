#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n,coin,day,i;
	while(scanf("%d",&n),n){
		coin=0;
		day=0;
		i=1;
		while(day<n){
			if(day+i>n){
				coin+=(n-day)*i;
				break;
			}else
			day+=i;
			coin+=i*i;
			i++;	
		}
		printf("%d %d\n",n,coin);
	}
	return 0;
}

