#include<bits/stdc++.h>

using namespace std;

//samakotas algo until sep2
int until_Sep2_1752(int d,int m,int y){
    int i;
    d+=12;//as 10 day is removed in this day
    /*I don't know why the fuck I have to add 12 it has to be 10
	but it matches the answer with the test output 
	as adding 10 doesn't work I was just brute forcing
	 random nubers close to it and I found 12 works perfectly
	if anyone read this code and understand why 12 works please 
	inform me the logic - @princebillyGK
    */ 
    int t[12]={0,3,2,5,0,3,5,1,4,6,2,4};
    y-=m<3;
    i=(y+y/4+t[m-1]+d)%7;//as leapyear|4
    return i;
}
//samakotos algo after sep2
int after_Sep2_1752(int d,int m,int y){
    int i;
    int t[12]={0,3,2,5,0,3,5,1,4,6,2,4};
    y-=m<3;
    i=(y+y/4-y/100+y/400 +t[m-1]+d)%7;
    return i;
}
//day genarator until sep 2
int beforedaysOfMonthGen(int month,int year){
	int daysOfMonth[]={
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	if(year%4==0)
		daysOfMonth[1]=29;
	return daysOfMonth[month-1];
}
//day genarator after sep 2
int afterdaysOfMonthGen(int month,int year){
	int daysOfMonth[]={
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	if(year%400==0||(year%100!=0 && year%4==0))
		daysOfMonth[1]=29;
	return daysOfMonth[month-1];
}


int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	char dayOfWeek[][20]={
		"Sunday",
		"Monday",
		"Tuesday",
		"Wednesday",
		"Thursday",
		"Friday",
		"Saturday"
	};
	char monthName[][20]={
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
  		"August",
  		"September",
  		"October",
  		"November",
  		"December"
	};


	int day, month, year;
	char dayName[20];
	while(scanf("%d %d %d",&month,&day,&year ),(month||day||year)){		
	
		if(
			year<1752||
			(year==1752 && month<9) ||
			(year==1752 && month==9 && day<=2)
		){
			if(
				month>12||
				month<1 ||
				year<0 ||
				day>beforedaysOfMonthGen(month, year) ||
				day<1||
				(month==10 && year==1582 && (day>=4 && day<=14)) // as this days has no  hotory
			)
				printf("%d/%d/%d is an invalid date.\n",month,day,year);
			else{
				strcpy(dayName, dayOfWeek[until_Sep2_1752(day,month,year)]);
				printf("%s %d, %d is a %s\n",monthName[month-1],day,year,dayName);
			}
		}
		else{
			if(
				month>12||
				month<1 ||
				year<0 ||
				day>afterdaysOfMonthGen(month, year) ||
				day<1||
				(month==9 && year==1752 && (day>=3 && day<=13)) //as this days has no  hotory
			)
				printf("%d/%d/%d is an invalid date.\n",month,day,year);
			else{
				strcpy(dayName, dayOfWeek[after_Sep2_1752(day,month,year)]);
				printf("%s %d, %d is a %s\n",monthName[month-1],day,year,dayName);
			}
		}
		
	
	}
	return 0;
}
