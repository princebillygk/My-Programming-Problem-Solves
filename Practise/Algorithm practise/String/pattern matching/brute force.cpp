#include<bits/stdc++.h>

using namespace std;

//*
int mystrstr(char * string , char* pattern){	
	int lengthOfString=strlen(string), lengthOfPattern=strlen(pattern);
	int i, j;
	for(i=0;i<=lengthOfString-lengthOfPattern;i++){
		for (j=0; j<lengthOfPattern;j++){
			if(string[i+j]!=pattern[j])
				break;
		}
		if(j==lengthOfPattern) //if found
			return i;
	}
	return -1; //if not found
}
//*/



int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	
	char str[10000],pattern[100];
	int index;

	//input
	fgets(str,sizeof(str),stdin);
	fgets(pattern,sizeof(pattern),stdin);

	//fgets include newline with string 
	//removing the extra \n
	if(str[strlen(str)-1]=='\n'){
		str[strlen(str)-1]='\0';
	}
	if(pattern[strlen(pattern)-1]=='\n'){
		pattern[strlen(pattern)-1]='\0';
	}

	/*debug
	puts(str);
	puts(pattern);
	int lenStr=strlen(str), lenPat=strlen(pattern);
	printf("%d %d\n",lenStr,lenPat );
	//*/
	
	//*Searching
	index=mystrstr(str, pattern);
	if(index<0){
		printf("Not found\n");
	}else{
		printf("Found at %d position\n",index+1);
		/*debug
		for(int i=index;i<(index+strlen(pattern));i++){
			putchar(str[i]);
		}printf("\n");
		//*/
	}

	//*/

	return 0;
}
/*input
prince billy graham
graha
//*/

/*output
Found at 14 position
//*/