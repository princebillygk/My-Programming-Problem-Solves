#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector< int >myvec;
	int n, input;
	scanf("%d", &n);
	for (int i = 0; i< n; i++) {
		scanf("%d", &input);
		myvec.push_back(input);
	}
	sort(myvec.begin(), myvec.end());
	for (int i : myvec) {
		printf("%d ", i);
	}
	printf("\n");
    return 0;
}
