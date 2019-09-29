#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main() {
	lli start_range, stop_range, number_length;
	char number[100];
	bool unique, exists = false;
	scanf("%lld %lld", &start_range, &stop_range);
	while ( start_range <= stop_range) {
		sprintf(number, "%lld", start_range);
		//cout << start_range<< endl;
		number_length = strlen(number);
		unique = true;
		for (int i = 0; i < number_length - 1; i++) {
			for(int j = i + 1; j < number_length; j++) {
				if (number[i] == number[j]) {
					unique = false;
				}
			}
		}
		if (unique) {
			printf("%s\n", number);
			exists = true;
			break;
		}
		start_range++;
	}
	if (!exists)
		printf("-1\n");
	return 0;
}
	
