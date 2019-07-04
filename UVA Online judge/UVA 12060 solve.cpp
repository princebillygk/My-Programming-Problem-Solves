#include<iostream>

using namespace std;

long long int count (long long int);
long long int gcd(long long int,long long int);

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	bool negative;
	long long int n,val,add,Case=0,o,a,b,max,min,digit,x,adigit,bdigit,xdigit,temp;
	while(cin>>n && n){
		add=0;
		for(int i=0;i<n;i++){
			cin>>val;
			add+=val; //adding all values
		}
		cout<<"Case "<<++Case<<":"<<endl;
		a=add; b=n; 
		if(add%n==0){ //if avg is a integer value
			if(a<0) {a*=-1; cout<<"- ";} //add minus and a space if negative and remove sign from number
			cout<<a/b<<endl;  //print integer avg
		}else{ //if avg is not a integer
			negative=false;
			if(a<0) {a*=-1; negative=true;} //if negative then remove sign form original number and add negative sign later
			if(a>b){ //finding max min
				max=a; 
				min=b;
			}else{
				max=b;
				min=a;
			}
			min=gcd(max,min); //getting greates common divisor
			//cout<<min<<endl;
			a=a/min; //minimizing upper sider
			b=b/min; //minimizinig lower side
			if(a<b){
				adigit=count(a); 
				bdigit=count(b);
				temp=bdigit-adigit;  //count the extra digits in b compare to a
				if(negative) cout<<"  ";  //spacing for negative sign 
				while(temp--) cout<<" ";  //adding middle bar
				cout<<a<<endl;
				if(negative) cout<<"- ";
				while(bdigit--) cout<<"-";
				cout<<endl;
				if(negative) cout<<"  ";
				cout<<b<<endl;
				//cout<<a<<"/"<<b<<endl;
			}				
			else{
				x=a/b;
				a=a%b;
				adigit=count(a);
				bdigit=count(b);
				xdigit=count(x);
				temp=bdigit-adigit+xdigit; //x a/b
				if(negative) cout<<"  ";
				while(temp--) cout<<" ";
				cout<<a<<endl;
				if(negative) cout<<"- ";
				cout<<x;
				while(bdigit--) cout<<"-";
				cout<<endl;
				if(negative) cout<<"  ";
				while(xdigit--) cout<<" ";
				cout<<b<<endl;
				//cout<<x<<" "<<a<<"/"<<b<<endl;
			}
		}
	}

	return 0;
}


long long int count (long long int n){
	long long int i=1;
	while(n/=10)
		i++;
	return i;
}
long long int gcd(long long int a ,long long int b){
	return b==0?a:gcd(b,a%b);
}