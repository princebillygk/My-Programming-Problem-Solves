#include<cstdio>
#include<iostream>
#define maxcard 300
#define maxlength 5.20
using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/


	/*
	//Time limit exceeds
	double input,temp;
	int counter;
	while(scanf("%lf",&input),input!=0){
		counter=0; temp=0;
		while(temp<input){
			temp+=1.0/(++counter+1.0);
		}
		printf("%d card(s)\n",counter); 
	}
	return 0;
	//*/
	double len[maxcard],input;
	int total;
	len[0]=0.0;
	//Genarating length for all amount of cards
	for(total=1; len[total-1]<maxlength ;total++){
		len[total]=len[total-1]+1.0/(total+1.0);
	}
	//binary search
	while(scanf("%lf",&input),input!=0){
		int start, end, mid;
		start=0;
		end=total;
		while(start+1<end){
			mid=(start+end)/2;
			if(len[mid]<input){
				start=mid; 
			}else
				end=mid;
		}
		printf("%d card(s)\n",end);
	}
	return 0;
}