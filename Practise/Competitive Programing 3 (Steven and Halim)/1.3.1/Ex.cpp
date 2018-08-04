#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
	char a[999],c;
	int total,i;
		i=-1;
		total=0;
		while(1){
			c=getchar();
			if(c==EOF)
				break;
			if(c=='\n'){
				a[++i]='\0';
				total+=atoi(a);
				cout<<"Total:"<<total<<endl;
				total=0;
				i=-1;
			}else if(c==' '){
				a[++i]='\0';
				total+=atoi(a);	
				i=-1;			
			}else{
				a[++i]=c;
			}
		}

	return 0;
}
