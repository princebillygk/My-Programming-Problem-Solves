#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
//    freopen("Output.txt","w",stdout);
    int Case, student, dust, total_dust;
    cin>>Case;
    for(int i=1;i<=Case;i++){
       cin>>student;
       total_dust=0;
       while(student--){
        cin>>dust;
        if(dust>0)
            total_dust+=dust;
       }
       printf("Case %d: %d\n",i,total_dust);
    }

    return 0;
}
