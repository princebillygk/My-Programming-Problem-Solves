#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

vector<lli> divisors;
pair<vector<lli>::iterator, vector<lli>::iterator> it;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("myoutput.txt", "w", stdout);
	int test_case;
	
	lli k, divisor, n;
	scanf("%d", &test_case);	
	for (int t = 0; t < test_case; t++) {
		n = 1;
		scanf("%lld", &k);
		for (int i = 0; i < k; i++) {
			scanf("%lld", &divisor);
			divisors.push_back(divisor);
		}	
		it = minmax_element(divisors.begin(), divisors.end());	
		printf("Case %d: %lld\n",t + 1, *it.first * *it.second);
		divisors.clear();	
	}
	return 0;
}
	
		
