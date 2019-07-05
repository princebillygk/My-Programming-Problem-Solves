#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    //*/
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    //*/
    int npage,start,end,sheet;
    while(cin>>npage){ //takes the number of pages
        if(npage==0) //closes the program when the input is 0
            break;
        start=1; //starting page content indicator
        if(npage%4!=0) end=(npage/4)*4+4; //if the number is not divisible by 4 then increase the number so that it is divisible by 4
        else end=npage; //if it is divisible by 4 then end indicator will be the number of page
        sheet=1;
        cout<<"Printing order for "<<npage<<" pages:"<<endl;
      	//cout<<end<<endl;
        while(start<end && start<=npage){ //prints pages while all of them are not finished
        	//cout<<end<<endl;
        	if(end>npage){ //if the end page indicator is greater than actual page number then the content will be blank 
        		printf("Sheet %d, front: Blank, %d\n",sheet,start++);
        		end--;
        	}
     		else
            	printf("Sheet %d, front: %d, %d\n",sheet,end--,start++);
        	//cout<<end<<endl;
        	if(start<=npage){ //works if all pages are not finished
        		if(end>npage){ //if the end page indicator is greater than actual page number then the content will be blank
          		printf("Sheet %d, back : %d, Blank\n",sheet++,start++);
          		end--;
        		}else
	            	printf("Sheet %d, back : %d, %d\n",sheet++,start++,end--);
	       	}
	       	//cout<<end<<endl;
        }
    }

    return 0;
}