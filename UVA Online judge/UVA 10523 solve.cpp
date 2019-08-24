#include<bits/stdc++.h>
#define MAX_LEN 5000
using namespace std;

class bigInteger{
	public:
		int length=1;
		int n[MAX_LEN];
	public:
		void set(char* str){
			//cout<<str<<endl;
			int len=strlen(str);;
			for(int i=0;i<MAX_LEN;i++){
				if(i>=len)
					n[i]=0;
				else 
					n[i]=str[len-1-i]-'0';
			}
			length=len;
		}

		void multiply(bigInteger num){
			int len1=length, len2= num.length;
			int maxlen=len1+len2;
			int res[MAX_LEN];
			
			for(int i=0;i<maxlen;i++){
				res[i]=0;
			}
			
			for(int i=0;i<len1;i++){
				for(int j=0;j<len2;j++){
					res[i+j]+=n[i]*num.n[j];
				}
			}

			for(int i=0;i<maxlen;i++){
				if(res[i]>=10){
					res[i+1]+=res[i]/10;
					res[i]=res[i]%10;
				}
			}

			if (res[maxlen-1]==0){
				maxlen--;
			}
			for(int i=0;i<maxlen;i++){
				n[i]=res[i];
			}
			length=maxlen;
		}

		void add(bigInteger num){
			int len1=length, len2= num.length;
			int maxlen=len1>len2?len1+1: len2+1;
			for(int i=0;i<maxlen;i++){
				n[i]+=num.n[i];
				if(n[i]>=10){
					n[i]-=10;
					n[i+1]++;
				}
			}

			if (n[maxlen-1]==0){
				maxlen--;
			}
			length=maxlen;

		}




		void get(){
			for (int i=0;i<length ;i++){
				printf("%d",n[length-i-1]);
			}
			printf("\n");
		}

		
};


int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	bigInteger a,num,sum,iter;
	int N;
	char A[MAX_LEN],temp[100];
	/*debug
	//bigInteger n, m;
	n.set((char*)"99");
	m.set((char*)"1");
	n.get();
	m.get();
	n.multiply(m);
	n.add(m);
	n.get();
	//*/
	//*/
	while(scanf("%d %s",&N,A)!=EOF){
		a.set(A);
		num.set(A);
		sum.set(A);
		//printf("SUM: ");sum.get();
		if(strcmp(A,"0")==0){
			printf("0\n");
			continue;
		}//	
		for(int i=2;i<=N;i++){
			num.multiply(a);
			//printf("After multiply: ");num.get();
			sprintf(temp,"%d",i);
			iter.set(temp);
			//iter.get();
			iter.multiply(num);
			sum.add(iter);
			//printf("SUM: ");sum.get();		
		}
		sum.get();
	} 
	//*/
	return 0;
}
