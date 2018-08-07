#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int K,M,C,R,subjectChossen[100],subject,match;
	bool flag;
	/*
	 * K=numberOfChossenSubject
	 * M=numberofcatagories
	 * C= numberOfSubjectInEachCatagory
	 * R=numberOfRequiredSubjectInEachCatgory
	*/
	while(scanf("%d",&K),K){
		flag=true;
		scanf("%d",&M);
		for(int i=0;i<K;i++){
			scanf("%d",&subjectChossen[i]);
		}
		while(M--){
			match=0;
			scanf("%d %d",&C,&R);
			while(C--){
				scanf("%d",&subject);
				if(flag){
					for(int i=0;i<K;i++){
						if(subjectChossen[i]==subject){
							match++;
							break;
						}
					}
				}
			}
			if(flag && match<R)
				flag=false;
		}
		printf(flag?"yes\n":"no\n");
	}
	return 0;
}
