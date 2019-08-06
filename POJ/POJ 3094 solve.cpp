#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	/*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	string temp;
	int quicksum,val;
	while(getline(cin,temp), temp!="#"){
		quicksum=0;
		for(int i=0;i<temp.length();i++){
			if(temp[i]==' ')
				val=0;
			else val=temp[i]-'A'+1;
			quicksum+=(i+1)*val;
		}
		printf("%d\n",quicksum);
	}
	return 0;
}