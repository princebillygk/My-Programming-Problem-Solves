#include<bits/stdc++.h>
#define MAX_LEN 1000000

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int testCase,i,n,maxlen;
	char str[MAX_LEN];
	int lps[MAX_LEN];
	scanf("%d",&testCase);

	while(testCase--){
		scanf("%s",str);
		n=strlen(str);
		maxlen=0;
		i=0;
		for (int j=1;j<n;){
			//cout<<str[i]<<" "<<str[j]<<endl;
			if(str[i]==str[j]){
				i++;
				lps[j]=i;
				j++;
			}else{
				//cout<<maxlen<<" "<<i<<endl;
				if(i==0) j++; 
				i=0;
				lps[j]=i;
			}
			//cout<<i<<endl;
		}
		//cout<<maxlen<<" "<<i<<endl;
		/*debug
		for(int i=0;i<n;i++){
			cout<<str[i];
		}cout<<endl;
		for(int i=0;i<n;i++){
			cout<<lps[i];
		}cout<<endl;
		//*/
		printf("%d\n",lps[n-1]);
	}	
	  

	return 0;
}
