#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int h,m;
	double angle,temp1,temp2,temp3;
	while(scanf("%d : %d",&h,&m),(h||m)){
		if(m==0){
			if(h==12){
				angle=0;
			}else{
				temp1=30*h;
				temp2=360-temp1;
				angle=temp1<temp2?temp1:temp2;
				}	
		}		
		else{
		temp1=(h+m/60.0)*30-m*6;
		temp2=0<temp1?temp1:temp1*-1;
		temp3=360-temp2;
		angle=temp2<temp3?temp2:temp3;	
		}	
		printf("%0.3f\n",angle);
	}
	return 0;
}
