#include<iostream>
#include<cmath>

using namespace std;

int main(){
	//freopen("output.txt","w",stdout);
	int n,c,center, item;
	while(cin>>n>>c){
		cout<<n<<" "<<c<<": ";
		item=0;
		bool a[n];
		int b[n];
		for(int i=1;i<=n;i++) a[i]=1;
		for(int i=2;i*i<=n;i++){
			for(int j=2;i*j<=n;j++){
				a[i*j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			if(a[i]){
				b[item]=i;
				item++;
			}
		}
		if(2*c<item){
			center=ceil(item/2.0);
			if(item & 1){
				for(int i=center-c;i<=center+c-2;i++){
					cout<<b[i];
					if(i!=center+c-2){
						cout<<" ";
					}
				}
			}else{
				for(int i=center-c;i<=center+c-1;i++){
					cout<<b[i];
					if(i!=center+c-1){
						cout<<" ";
					}
				}	
			}
		}else{
			for(int i=0;i<=item-1;i++){
					cout<<b[i];
					if(i!=item-1){
						cout<<" ";
					}
			}	
		}
		cout<<endl<<endl;
		
	}
	cout<<endl;
	//system("gedit output.txt");
	
	return 0;
}
