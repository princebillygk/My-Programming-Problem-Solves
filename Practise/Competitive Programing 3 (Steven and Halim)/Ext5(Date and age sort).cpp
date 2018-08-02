#include<iostream>
#include<sstream>
using namespace std;

struct dateOfBirth{
    string Name;
    int d,m,y,age;
    dateOfBirth(){
        d=0;m=0;y=0;
    }
    void getInstace(){
        cout<<"Enter Name: ";
        cin>>Name;
        cout<<"Enter Date: ";
        getDate();
        setAge();
    }
    void setAge(){
        age=(2050-y);
    }
    void getDate(){
        scanf("%d / %d / %d",&d,&m,&y);
    }
	string showDate(){
		stringstream a;
		a<<d<<"/"<<m<<"/"<<y;
		return  a.str();
	}
    int  showAge(){
		return age;
	}
		
};

void swap(dateOfBirth &pep1,dateOfBirth &pep2){
		dateOfBirth temp=pep1;
		pep1=pep2;
		pep2=temp;
		
	}
	
void sortByDate(dateOfBirth* pep,int n){
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(pep[j].d>pep[j+1].d){
				swap(pep[j],pep[j+1]);
			}
}

void sortByMonth(dateOfBirth* pep,int n){
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(pep[j].m>pep[j+1].m){
				swap(pep[j],pep[j+1]);
			}
}

void sortByAge(dateOfBirth* pep,int n){
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(pep[j].age>pep[j+1].age){
				swap(pep[j],pep[j+1]);
			}
}

int main(){
//	freopen("input.txt","r",stdin);
	int n;
	printf("How many Data do you want to input? ");
	scanf("%d",&n);
	dateOfBirth pep[n];
	for(int i=0;i<n;i++){
		pep[i].getInstace();
	}
	printf("\nYou Have inputed: \n");
	for(int i=0;i<n;i++){
		cout<<pep[i].Name<<": "<<pep[i].showDate()<<":"
		<<pep[i].showAge()<<endl;
	}
	sortByDate(pep,n);
	printf("\nSorted By Date\n");
	for(int i=0;i<n;i++){
		cout<<pep[i].Name<<": "<<pep[i].showDate()<<endl;
	}
	sortByMonth(pep,n);
	printf("\nSorted By Month\n");
	for(int i=0;i<n;i++){
		cout<<pep[i].Name<<": "<<pep[i].showDate()<<endl;
	}
	sortByAge(pep,n);
	printf("\nSorted By Age\n");
	for(int i=0;i<n;i++){
		cout<<pep[i].Name<<": "<<pep[i].showAge()<<endl;
	}
    return 0;
}
