#include<iostream>
#include<math.h>
using namespace std;
#define max 164000
#define maxprime 15000
#define lim sqrt(max+1)
using namespace std;
int main(){
    int prime[maxprime],nprime,Case;
    bool all[max];
    int i,j,k=0;
    prime[k++]=2;
    for(i=3;i<max;i+=2){
        all[i]=true;
    }
    for(i=3;i<max;i+=2)
        if(all[i]){
            if(i<=lim)
                for(j=i*i;j<max;j+=i<<1)
                    all[j]=false;
        prime[k++]=i;
        }
   cin>>Case;
   while(Case--){
       cin>>i;
       cout<<prime[i-1]<<endl;
    }
    return 0;
}

