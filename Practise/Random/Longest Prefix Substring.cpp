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
		cout<<"str: ";
		for(int i=0;i<n;i++){
			cout<<str[i]<<" ";
		}cout<<endl<<"lps: ";
		for(int i=0;i<n;i++){
			cout<<lps[i]<<" ";
		}cout<<endl;
		
		//printf("%d\n",lps[n-1]);
	}	
	  

	return 0;
}
/*sample input
4
abab
aaaa
yuywyuwyujyuywyy
qgqbqgqlqjqgvqgqbqwq
//*/

/*output
str: a b a b 
lps: 0 0 1 2 
str: a a a a 
lps: 0 1 2 3 
str: y u y w y u w y u j y u y w y y 
lps: 0 1 1 0 1 2 0 1 2 0 1 2 3 4 5 1 
str: q g q b q g q l q j q g v q g q b q w q 
lps: 0 1 1 0 1 2 3 0 1 0 1 2 0 1 2 3 4 5 0 1 
//*/
