#include<bits/stdc++.h>

using namespace std;

int main(){
	/*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/
	int n,stroke,slen,glen,notmatched,temp;
	/*
	* n Holds the round number
	* stroke holds number of stroke
	* slen holds the result length
	* glen holds the guess length
	* notmatched number of guess vs notmatched charractor
	* temp used to compare previous state of notmatched letter after one guessing
	*/ 
	string str,guess; //inputs
	bool checked['z'-'a'+1]; 
	//a list of lower case charractor to track of already guessed charractor

	while(scanf("%d",&n) && n!=-1){ //take round number until -1
		printf("Round %d\n",n);
		stroke=0; 
		for(int i=0;i<('z'-'a'+1);i++){ 
			checked[i]=false; //all letters ar unguessed at init state
		}
		cin.ignore();
		getline(cin,str); slen=str.length();
		notmatched=temp=slen; 
		//As there is no guess at init state there will be nomatching letter
		getline(cin,guess); glen=guess.length();
		
		for(int i=0;i<glen;i++){
			if(checked[guess[i]-'a']){
				//letter is already used skip it				
				continue;
			}
			
			for(int j=0;j<slen;j++){ //compare are letter of str with guess
				if(str[j]==guess[i]){ 
					notmatched-=1;
					str[j]='*';
					//1 letter matched in the string for the guess
					checked[guess[i]-'a']=true;
					//letter gussed
				}
			}
			
			if(temp==notmatched){
				//no letter matched for the guess
				stroke++;
				checked[guess[i]-'a']=true;
			}
			temp=notmatched; //if the letter is unique and not correct guess
			if(stroke==7 && notmatched!=0){ 
				printf("You lose.\n"); 
				//if all strokes done before guess
				break;
			}else if(notmatched==0){
				printf("You win.\n");
				//if the string matched beforev all strokes done
				break;	
			}
			
		}
		//if not enough guess
		if(stroke!=7 && notmatched!=0) printf("You chickened out.\n");
	}

	return 0;
}