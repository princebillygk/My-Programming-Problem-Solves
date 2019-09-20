#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
	vector< int >myvec;
	int position, start_pos, end_pos;
	int n, input;
	scanf("%d", &n);
	for (int i = 0; i< n; i++) {
		scanf("%d", &input);
		myvec.push_back(input);
	}
	scanf("%d %d %d", &position, &start_pos, &end_pos);
	myvec.erase(myvec.begin() + position - 1);
	myvec.erase(myvec.begin() + start_pos -1, myvec.begin() + end_pos - 1);
	printf("%lu\n", myvec.size());
	for (int i : myvec) {
		printf("%d ", i);
	}
	printf("\n");
    return 0;
}
