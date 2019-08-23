#include<bits/stdc++.h>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	
	int Case, len1, len2, maxlen, temp;
	char str1[400], str2[400];
	int a[400], b[400];

	scanf("%d",&Case);
	while(Case--){
		scanf("%s %s",str1, str2);
		
		//length calculation
		len1 = strlen(str1);
		len2 = strlen(str2);
		maxlen = len1 > len2 ? len1 : len2;
		

		//string to array conversion
		for ( int i = 0; i <=maxlen; i++ ){
			i >= len1 ? a[i] = 0 : a[i] = str1[i]-'0';
			i >= len2 ? b[i] = 0 : b[i] = str2[i]-'0';
			//out<< str1[i]-'0'<<" ";
			//cout<< str2[i]-'0'<<endl;
		}
	
		/*/debug
		for (int i=temp; i< maxlen; i++){
			printf("%d",a[i] );
		}
		printf(" ");
		for (int i=temp; i< maxlen; i++){
			printf("%d",b[i] );
		}
		printf("\n");
		//*/

		//adding the array
		for ( int i = 0; i < maxlen; i++ ){
			a[i]+=b[i]; 
			if( a[i] >= 10 ){
				a[i]-=10;
				a[i+1]++;
			}
		}
		
		//skip leading 0s
		temp=0;
		while(1){
			if(a[temp]==0)
				temp++;
			else break;
		}
		//cout<<temp<<endl;

		//printing the result
		for (int i=temp; i< maxlen; i++){
			printf("%d",a[i] );
		}
		if(a[maxlen]!=0) printf("%d",a[maxlen]);
		printf("\n");
	} 

	return 0;
}
