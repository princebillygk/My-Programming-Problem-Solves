#include<cstdio>
#include<iostream>
#include<vector>
typedef long long unsigned int llu;
using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	
	//genarating lengths
	llu input,temp;
	vector<llu> lgroup;
	int Case,number, currnumber,size,currindex,extradigit,digit;
	lgroup.push_back(1);
	int start,end,mid,index=1;
	while(lgroup[index-1]<2147483647){
		lgroup.push_back(lgroup[index-1]+index+1);
		index++;
	}
	//cout<<"done "<<index<<" "<<lgroup.size()<<" "<<lgroup[index]<<endl;
	/*/
	for(int i=0;i<100;i++){
		cout<<"vector :"<<lgroup[i]<<endl;
	}
	//*/

	//genarting at which section they are;
	scanf("%d",&Case);
	while(scanf("%llu",&input),Case--){
		start=0;
		end=index;
		mid=(start+end)/2;
		while(start<end){
			if(lgroup[mid]<input)
				start=mid+1;
			else
				end=mid;
			mid=(start+end)/2;
		}
		//cout<<start+1<<endl;

		//geting the index on section perspective
		if (start==0) 
			temp=0;
		else
			temp=input-lgroup[start-1]-1;
		//cout<<"position: "<<temp<<endl;
		//
		
		
		//getting the digit
		bool flag=false;
		currindex=-1;
		number=1;
		//
		while(currindex<temp){
			flag=true;
			//cout<<"number "<<number<<endl;
			currnumber=number;
			size=0;
			while(currnumber){
				size++;
				currnumber/=10;
			}
			//cout<<"size: "<<size<<endl;
			currindex+=size;
			//cout<<number<<" "<<currindex<<endl;
			number++;

		}
		if(!flag) number++;

		extradigit=currindex-temp;
		//*/
		//cout<<temp<<endl;
		//cout<<currindex<<endl;
		//cout<<number<<endl<<endl;
		//cout<<extradigit<<endl;
		//*/
		for(int i=0;i<extradigit;i++){
			number/=10;
		}
		//cout<<number<<endl;
		digit=number%10;
		printf("%d\n",digit);

	}

	

	return 0;
}