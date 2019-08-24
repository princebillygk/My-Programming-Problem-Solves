#include<bits/stdc++.h>
using namespace std;


int main(){
	//*/
	freopen("_input.txt","r",stdin);
	freopen("_output.txt","w",stdout);
	//*/

	char str1[400],str2[400];
	int temp,a[400],b[400],reverseRes[400],res[400], reslen, len1, len2, maxlen;

	while(scanf("%s %s",str1,str2)!=EOF){

		//length calculation
		len1= strlen(str1);
		len2= strlen(str2);
		maxlen=len1>len2? len1: len2;

		//strtoarr
		for(int i=0; i<maxlen+1; i++){
			if(i>=len1)
				a[i]=0;
			else 
				a[i]=str1[len1-1-i]-'0';
		
			if(i>=len2)
				b[i]=0;
			else 
				b[i]=str2[len2-1-i]-'0';

			reverseRes[i]=0; //init res
		}

		//addition
		for(int i=0;i<maxlen;i++){
			reverseRes[i]+=a[i]+b[i];
			if(reverseRes[i]>=10){
				reverseRes[i]-=10;
				reverseRes[i+1]++;
			}
		}

		//reversing the result to get the accurate form
		printf("Addition: ");
		reslen=0;
		//if carry
		if(reverseRes[maxlen]!=0){
			res[0]=reverseRes[maxlen];
			reslen++;
		}
		for(int i=0;i<maxlen;i++){
			res[reslen]=reverseRes[maxlen-1-i];
			reslen++;
		}
		
		//printing result for addition
		for(int i=0;i<reslen;i++){
			printf("%d",res[i]);
		}
		printf("\n");		

		//substraction
		for(int i=0;i<maxlen;i++){
			reverseRes[i]=a[i];
		}//init res
		for(int i=0;i<maxlen;i++){
			if(reverseRes[i]<b[i]){
				reverseRes[i]=reverseRes[i]+10-b[i];
				reverseRes[i+1]--;
			}else{
				reverseRes[i]=reverseRes[i]-b[i];
			}
		}

		//if length decreased		
		reslen=0;
		if(reverseRes[maxlen-1]==0){
			reslen--;
		}
		
		//reversing the result
		printf("Substraction: ");
		for(int i=0;i<maxlen;i++){
			res[reslen]=reverseRes[maxlen-1-i];
			reslen++;
		}

		//printing result for substraction
		for(int i=0;i<reslen;i++){
			printf("%d",res[i]);
		}
		printf("\n");
		for(int i=0;i<len1+len2;i++){
				reverseRes[i]=0;
		}

		//multiplication 
		for(int i=0;i<len1;i++){
			for(int j=0;j<len2;j++){
				reverseRes[i+j]+=a[i]*b[j];
			}
		}
		for(int i=0;i<len1+len2;i++){
			if(reverseRes[i]>=10){
				reverseRes[i+1]+=reverseRes[i]/10;
				reverseRes[i]=reverseRes[i]%10;
			}
		}		

		//if no carry len1+len2-1	
		reslen=0;
		//*/
		if(reverseRes[len1+len2-1]==0){
			reslen--;
		}

		//reversing the result
		for(int i=0;i<len1+len2;i++){
			res[reslen]=reverseRes[len1+len2-i-1];
			reslen++;
		}

		//printf the result for multiplication
		printf("Multiplication: ");
		for(int i=0;i<reslen;i++){
			printf("%d",res[i]);
		}
		printf("\n\n");

	}
	


	return 0;
}
