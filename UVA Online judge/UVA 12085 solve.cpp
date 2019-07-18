#include<bits/stdc++.h>

using namespace std;

int main(){
    /*/
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    //*/
    int nPhone,CaseNo=0,pos;
    /*
     * nPhone 	: Store the number of phone number
     * CaseNo	: Count case number
     * pos 		: used to count positional value
     */
    unsigned long int number,temp,base,dest,tempbase;
    /*
     * number 	: Store the current input phone number
     * temp 	: Store the previous input
     * base     : Store the base consecutive number
     * dest		: Store the last consecutive 
     * tempbase	: Store base temporarily
     */
    while(scanf("%d",&nPhone),nPhone){
        printf("Case %d:\n",++CaseNo); //output
        
        //At initial point base and temp is 0
        base=0; 
        temp=0;

        for(int i=0;i<nPhone;i++){
            scanf("%lu",&number);
         	if(temp==0)	temp=number; //if it is the first phone number
         	
         	else if(number-temp!=1){ //if they are not consecutive
         		if(base==0){ //if there is no previous consecutive 
         			printf("0%lu\n",temp);
         			temp=number;
         		}else{
         			tempbase=base; dest=0; pos=1;
         			while(1){
         				tempbase/=10;
         				dest+=(temp%10)*pos;
         				pos*=10;
         				temp/=10;
         				if(tempbase==temp)
         					break;
         			}
         			printf("0%lu-%lu\n",base,dest);
         			base=0; temp=number;
         		}
         	}

         	else{
         		if(base==0) base=temp;
         		temp=number;
         	}
        }
        if(base==0)	printf("0%d\n",temp);
        else{
        	tempbase=base; dest=0; pos=1;
 			while(1){
 				tempbase/=10;
 				dest+=(temp%10)*pos;
 				pos*=10;
 				temp/=10;
 				if(tempbase==temp)
 					break;
 			}
 			printf("0%lu-%lu\n",base,dest);
        }printf("\n");
    }
    return 0;
}