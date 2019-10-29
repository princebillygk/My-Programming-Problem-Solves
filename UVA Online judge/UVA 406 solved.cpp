#include <bits/stdc++.h>

using namespace std;

bitset<1010> number;
vector<int> primes;

int main() {
	int n, c, start, end, mid;
	int prime_count;
	bool flag = false;

	while (scanf("%d %d", &n ,&c) != EOF) {
		//if (flag) {
			//printf("\n");
		//} else {
			//flag = true;
		//}
		number.set();
		primes.push_back(1);
		if (n > 1) {
			primes.push_back(2);
		}
		printf("%d %d:", n, c);
		for (int i = 3; i <= n; i+=2) {
			if(number.test(i)) {
				primes.push_back(i);
				for (int j = i; j <= n;  j+= i) {
					number.reset(j);
				}
			}
		}
		prime_count = primes.size();
		if (2 * c >= prime_count) {
			for (auto i : primes) {
				printf(" %d", i);
			}
		} else {
			if(prime_count & 1) {
				mid = prime_count / 2 + 1;
				start = mid - c;
				end = mid + c - 1;
			} else {
				mid = prime_count / 2;
				start = mid - c;
				end = mid + c;
			}
			//printf("%d %d %d %d\n", prime_count, start, mid, end);
			for (int i = start; i < end; i++) {
				printf(" %d", primes[i]);
			}
		}
		printf("\n\n");
		primes.clear();
	}
	return 0;
}

					
	
