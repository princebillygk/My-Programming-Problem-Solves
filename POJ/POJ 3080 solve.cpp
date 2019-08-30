#include<cstdio>
#include<iostream>
#include<cstring>

using namespace std;

int main(){
	//*/
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	//*/

	char dna_series[20][100], pattern[100], max_matched_pattern[100];
	int n_test_case, n_dna_series, len_dna_series0,
		len_pattern, max_matched_len, dna_length[20];
	bool matched;

	scanf("%d", &n_test_case);
	
	while (n_test_case--) {
		scanf("%d", &n_dna_series);

		//take dna_series as input
		for (int i = 0; i < n_dna_series; ++i) {
			scanf("%s", dna_series[i]);
			dna_length[i] = strlen(dna_series[i]);
		}

		/*debug input
		for (int i = 0; i < n_dna_series; ++i) {
			printf("%s\n", dna_series[i]);
			printf(" %d\n", int(strlen(dna_series[i])));
		}
		printf("\n");
		//*/

		len_dna_series0 = dna_length[0];
		//printf("%d\n", len_dna_series0);
		
		max_matched_len = 0;

		for(int i = 0; i < len_dna_series0; ++i) {
			matched = true;
			for(int j = i+2;matched & j < len_dna_series0; ++j){
				
				//genarate pattern
				strncpy(pattern, dna_series[0] + i, j - i + 1 );
				pattern[j - i + 1] = '\0';
				len_pattern= j - i + 1;
				//printf("%s\n", pattern);

				//check every string for match
				for (int k = 1; matched & k < n_dna_series; ++k)
				{
					//printf("%s %s\n",dna_series[k], pattern);
					if(strstr(dna_series[k], pattern) == NULL){
						//printf("not matched\n");
						matched = false;
					}
					//printf("matched\n");
				}//checkd every string

				//geting max matched pattern
				if(
					(matched == true) &&
					(
						len_pattern > max_matched_len ||
						(
							len_pattern == max_matched_len &&
							strcmp(max_matched_pattern, pattern) > 0
						)
					)
				  ) {
				  	max_matched_len = len_pattern;
				  	strcpy(max_matched_pattern, pattern);
				  	//printf("%s\n", max_matched_pattern);
				}//max matched pattern

			}//making pattern for each itteration j
		}//making pattern for each itteration of i
		if(max_matched_len >= 3)
			printf("%s\n", max_matched_pattern);
		else
			printf("no significant commonalities\n");

	}//close test_case loop
	
	return 0;
}