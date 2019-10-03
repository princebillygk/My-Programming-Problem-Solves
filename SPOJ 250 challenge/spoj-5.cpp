#include <bits/stdc++.h>

using namespace std;

char number[10000000];
int main () {
	//freopen ("input.txt", "r", stdin);
	//freopen ("myoutput.txt", "w", stdout);

	int test_case, number_length, mid, l, r;
	bool isodd_len;
	
	scanf("%d", &test_case);
	
	while (test_case--) {
		scanf("%s", number);
		//clog << number << " ";
		number_length = strlen(number);
		//check if the length is odd or even
		if ((number_length & 1)) {
			isodd_len = true;
		} else {
			isodd_len = false;
		}
		//clog << number << " " << isodd_len << endl;
		
		//set mid, l, r
		mid = number_length / 2;
		//clog << "mid = " << mid <<endl;
		if (isodd_len) {
			l = mid - 1;
			r = mid + 1;
		} else {
			l = mid - 1;
			r = mid;
		}
		//clog << "l = " << l << " r = " << r << endl;
		
	 	//part i
		while (number[l] == number[r] && l >= 0) {
			l--;
			r++;
		}
		//clog << "l = " << l << " r = " << r << endl;

		//part ii:
		//if the string is already a palindrome
		if ( l == -1) {
			if (isodd_len) { 			//if odd
				number[mid]++;
				if(number[mid] == ':') {
					l = mid - 1;
					r = mid + 1;
					number[mid] = '0';
					while (++number[l] == ':' && l >= 0) {
						number[l] = '0';
						number[r] = '0';
						l--;
						r++;
					}
					if (l == -1) {
						number[number_length-1] = '\0';
						printf("1%s1\n", number);
						continue;
					} else {
						++number[r];
						l--;
						r++;
					}
				}
			} else {					//if even
				l = mid - 1;
				r = mid;
				while (++number[l] == ':' && l>= 0) {
					number[l] = '0';
					number[r] = '0';
					l--;
					r++;
				}
				if (l == -1) {
					number[number_length-1] = '\0';
					printf("1%s1\n", number);
					continue;
				} else {
					++number[r];
					l--;
					r++;
				}
			}
		} else { 	//if the string is non palindrome
			if (number[l] > number[r]) {
				number[r] = number[l];
				l--;
				r++;
			} else {
				//clog << number << endl;
				if (isodd_len) {
					l = mid - 1;
					r = mid + 1;
					//clog << "l = " << l << " r = " << r << endl;
					//clog << number << endl;
					if (++number[mid] == ':') {
						//clog << number << endl;
						number[mid] = '0';
						while (++number[l] == ':') {
							number[l] = '0';
							number[r] = '0';
							l--;
							r++;
						}
						number[r] = number[l];
						l--;
						r++;
					}
				} else {
					l = mid - 1;
					r = mid; 
					//clog << "l = " << l << " r = " << r << endl;
					//clog << number[l] <<endl;
					//clog << number << endl;
					while (++number[l] == ':') {
						number[l] = '0';
						number[r] = '0';
						l--;
						r++;
						//clog << number << endl;
					}
					number[r] = number[l];
					//clog << number << endl;
					l--;
					r++;
				}
			}
		}
		
		while (l >= 0) {
			number[r] = number[l];
			l--;
			r++;
		}
		//clog << number << endl;
		printf("%s\n", number);
	}
	return 0;
}
		
