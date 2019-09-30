#include <bits/stdc++.h>
#define bitset_range 100000
typedef long long int lli;
typedef long int li;
using namespace std;
template <typename T>
void printer(T a) {
	cout << a << endl;
}
vector<li> stock_prime;
bitset<bitset_range + 1> numbers;
bitset<10000000 + 1> segmented_numbers;
int main() {
	//normal seieve
	numbers.set();
	numbers.reset(0);
	numbers.reset(1);
	for (li i = 2; i <= bitset_range; i++) {
		if (numbers.test(i)) {
			for (li j = i * i; j <= bitset_range; j+= i) {
				numbers.reset(j);
			}
			stock_prime.push_back(i);
		}
	}
	//for_each(stock_prime.begin(), stock_prime.end(), printer<int>);
	//cout << "Size: " << stock_prime.size() << endl;
	
	//segmented Seive
	int test_case;
	bool exist;
	lli l, r, base;
	scanf("%d", &test_case);
	while (test_case--) {
		exist = false;
		segmented_numbers.set();
		scanf("%lld %lld", &l, &r);
		for (lli i : stock_prime) {
			if (i * i > r) break;
			base = (l / i) * i;
			if (base < l) {
				base += i;
			}	
			if (base == i) {
				base += i;	
			}
			for(lli j = base - l; j <= r - l; j+= i) {
				segmented_numbers.reset(j);
				//printf("cut %lld\n", j + l);
			}
		}
		if ( l == 1) segmented_numbers.reset(0);
		for (lli i = 0; i < r - l + 1; i++) {
			if(segmented_numbers.test(i)) {
				printf("%lld\n", i + l);
				exist = true;
			}
		}
		if (!exist) {
			printf("-1\n");
		}	
		printf("\n");
	}
	return 0;
}
