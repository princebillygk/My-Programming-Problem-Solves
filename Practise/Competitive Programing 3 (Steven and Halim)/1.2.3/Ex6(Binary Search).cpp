/*BInary Search Implementation*/

#include<iostream>
#include<cstdlib>
using namespace std;
int findLocation(int *a,int n,int item){
	int beg,end,mid;
	for(beg=0,end=n-1,mid=(n-1)/2;beg<=end;mid=(beg+end)/2.0 ){
		//printf("%d %d %d\n",a[beg],a[mid],a[end]);
		if(a[mid]==item)
			return mid+1;
		else if (a[mid]<item)
			beg=mid+1;
		else 
			end=mid-1;
	}
	return -1;
}
int main(){
		int loc, l[20],item;
		printf("Enter 20 Numbers\n");
		for(int i=0;i<20;i++){
			printf("%d : ",i+1);
			scanf("%d",&l[i]);
		}
		for(int i=0;i<20-1;i++)
			for(int j=0;j<20-i-1;j++)
				if(l[j]>l[j+1]){
						l[j]=l[j]^l[j+1];
						l[j+1]=l[j]^l[j+1];
						l[j]=l[j]^l[j+1];						
					}
		printf("Sortest list\n");
		for(int i=0;i<20;i++)
			printf("%d: %d\n",i+1,l[i]);
		printf("Which Item do you want to find?\n");
		scanf("%d",&item);
		loc=findLocation(l,20,item);
		loc==-1?printf("Item Not Found")
		:printf("Item Found at loc: %d",loc);
		return 0;

}
