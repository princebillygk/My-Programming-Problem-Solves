#include <bits/stdc++.h>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("myoutput.txt", "w", stdout);
	char first[1010], second[1010];
	int first_a[26], second_a[26];
	int temp_min;
	while(fgets(first, 10010, stdin)) {
		for (int i = 0; i < 26; i++) {
			first_a[i] = 0;
		}
		for (int i = 0; i < 26; i++) {
			second_a[i] = 0;
		}
		for (int i = 0; first[i] != '\n'; i++) {
			if(first[i] >= 'a' && first[i] <= 'z') {
				first_a[first[i] - 'a'] ++;
			}
		}
		fgets(second, 10010, stdin);
		for (int i = 0; second[i] != '\n'; i++) {
			if(second[i] >= 'a' && second[i] <= 'z') {
				second_a[second[i]  - 'a'] ++;
			}
		}
		for (int i = 0; i < 26; i++) {
			temp_min = min(first_a[i], second_a[i]);
			for (int j = 0; j < temp_min; j++) {
				printf("%c", 'a' + i);
			}
		}
		printf("\n");
	}
	return 0;
}

		

			
