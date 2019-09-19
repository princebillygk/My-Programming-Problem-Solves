#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(3);
	//init array
	int a[] = {1, 2, 3, 4, 5, 6};
	for (int i = 0; i < 6; ++i) {
		printf("%d\n", a[i]);
	}
	//reversing array
	reverse(a, a + 3);
	reverse(a + 3, a + 6);
	for (int i = 0; i < 6; ++i) {
		printf("%d\n", a[i]);
	}
	//find algorithm ins array
	printf("item found at %d\n", int(find(a, a+6, 4) - a));
	//set values into vector
	v[0] = 7;
	v[1] = v[0] + 3;
	v[2] = v[1] + v[0];
	
	for (auto i : v) {
		printf("%d ", i);
	}
	printf("\n");
	//reversing vector
	reverse(v.begin(), v.end());
	for (auto i : v) {
		printf("%d ", i);
	}
	printf("\n");
	reverse(v.begin(), v.end());
	//linear search in vector
	printf("item found at %d\n", int(find(v.begin(), v.end(), 10) - v.begin()));
	return 0;
}
