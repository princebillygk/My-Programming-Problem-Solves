//count when the last step is up and sea level becomes 0

#include<bits/stdc++.h>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n,seaLevel=0,state=1,valley=0;
	char temp;
	scanf("%d",&n);
	getchar();
	while(n--){
		temp=getchar();
		if(temp=='D'){
			seaLevel--;
		}
		else{
			seaLevel++;
			if(seaLevel==0){
				valley++;
			}			
		}
	}
	printf("%d\n",valley);
	return 0;
}
