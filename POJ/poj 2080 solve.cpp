#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

bool isLeapYear(int year)
{
	if(year%400==0||(year%100!=0 && year%4==0)){
		return true;
	}
	return false;
}
int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n,year,month,day;
	char dayName[20];
	char dayOfWeek[][20]={
		"Saturday",
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday"
	};
	int daysOfMonth[]={
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	bool flag;

 	while(scanf("%d",&n),n>=0){
 		year=2000;
 		month=1;
 		day=1;
 		flag=false;
 		//counting the dayName
 		strcpy(dayName,dayOfWeek[n%7]);
 		//counting the years
 		while(n){
 			flag=true;
 			if(isLeapYear(year) && n>=366){
 				n-=366;
 			}else if(!isLeapYear(year) && n>=365){
 				n-=365;
 			}else break;
 			year++;
 		}
 		
 		if(isLeapYear(year))  daysOfMonth[1]=29;
	 	else daysOfMonth[1]=28;
		
		while(n>=daysOfMonth[month-1]){
	 		n-=daysOfMonth[month-1];
	 		++month;
	 	}
	 	
	 	day+=n;


 		printf("%04d-%02d-%02d %s\n",year,month,day,dayName );
 	}

	return 0;
}