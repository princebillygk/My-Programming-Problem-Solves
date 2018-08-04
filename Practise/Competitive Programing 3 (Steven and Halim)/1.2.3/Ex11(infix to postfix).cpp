//4*(1+2*(9/3)-5)
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
char a[100];
char b[100];

int signPriority(char c);

int main(){
	char c;
	int top=-1,topb=-1;
	while((c=getchar())!='\n'){
		if(c=='('){
			a[++top]=c;
		    }
		else if(c=='-'||c=='+'
			||c=='*'||c=='/'){
			if(top==-1)
				a[++top]=c;
			else{
				while(signPriority(a[top])<=signPriority(c))
					b[++topb]=a[top--];
				a[++top]=c;
			}
		}
		else if(c==')'){
			while(a[top]!='(')
				b[++topb]=a[top--];	
			top--;		
		}
		else{
			b[++topb]=c;
		}
	//	cout<<"Prefix: "<<a<<endl<<"Stack: "<<b<<endl;
	}
	while(top!=-1)
		b[++topb]=a[top--];
	b[++topb]='\0';
	cout<<"Prefix Equation: "<<b<<endl;
	return 0;
}

int signPriority(char c){
		switch(c){
			case '^':return 1;
			case '*':
			case '/':return 2;
			case '+':
			case '-':return 3;
			default :return 100;
		}
	}




















