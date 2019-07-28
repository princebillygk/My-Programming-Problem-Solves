#include<cstdio>
#include<cmath>
#include<iostream>

#define pi acos(-1.0)
using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int nCase,year;
	double x,y,sqradius,semiCircle;
	/*
	* x,y: store coordinates
	* semiCirlce store the area of semi-circle
	* year: years takes to erosion of that semi-circle
	*/
	scanf("%d",&nCase);
	for(int Case=1;Case<=nCase;Case++){
		scanf("%lf %lf",&x,&y);
		sqradius = x*x + y*y;
		semiCircle= pi*sqradius/2.0;
		year= ceil(semiCircle/50.0);
		printf("Property %d: This property will begin eroding in year %d.\n",Case,year);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}