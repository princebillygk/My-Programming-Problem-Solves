#include<cstdio>
#include<iostream>
#include<stack>
#include<cstring>

int matrixRow[256];
int matrixCol[256];

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	stack<char> matrixStack;
	int n,expLen,instance,temp;
	char matrix, item1, item2;
	bool error;
	char exp[10000];

	scanf("%d",&n);
	getchar();
	//input matrixInfo
	while(n--){
		scanf("%c",&matrix);
		scanf("%d %d", &matrixRow[matrix],&matrixCol[matrix]);
		getchar();
		// cout<<matrix<<" "<<matrixRow[matrix]<<" "<<matrixCol[matrix]<<endl;
	}

	//expresion input and calculate
	while(scanf("%s",exp)!=EOF){
		temp='X'+1;
		// cout<<exp<<endl;
		instance=0;
		expLen=strlen(exp);
		error=0;
		if(expLen==1){
			printf("0\n");
			continue;
		}
		for(int i=0;i<expLen;i++){
			// cout<<exp[i]<<endl;
			if(exp[i]=='(')
				continue;
			else if (exp[i] == ')'){
				item2=matrixStack.top();
				matrixStack.pop();
				item1=matrixStack.top();
				matrixStack.pop();
				if(matrixCol[item1]!=matrixRow[item2]){
					error=1;
				}
				// cout<<matrixRow[item1]<<" "<<matrixCol[item1]<<endl;
				// cout<<matrixRow[item2]<<" "<<matrixCol[item2]<<endl;
				instance+=matrixRow[item1]*matrixCol[item1]*matrixCol[item2];
				matrixRow[temp]=matrixRow[item1];
				matrixCol[temp]=matrixCol[item2];
				matrixStack.push(temp);
				// cout<<"res :"<<matrixRow[temp]<<" "<<matrixCol[temp]<<endl;
				temp++;
			}else{
				matrixStack.push(exp[i]);
			}
		}
		matrixStack.pop();
		//exp
		if(error)
			printf("error\n");
		else 
			printf("%d\n",instance);
	}
	



	return 0;
}