#include <bits/stdc++.h> 

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int length, inp, key;
	vector<int> arr;
	printf("Enter the length of the array: ");
	scanf("%d", &length);
	printf("length: %d\nEnter the items of array:\n",
			length);
	for (int i = 0; i < length; ++i) {
		scanf("%d", &inp);
		arr.push_back(inp);
	}
	//outputing the inputed array
	printf("Before sorted:\n");
	for (int i = 0; i < length; ++i) {
		printf("%d ", arr.at(i));
	}
	printf("\n");
	//insertion sort;
	for (int i = 1; i < length; ++i) {
		printf("iter : arr[%d] = %d\n", i, arr[i]);
		key = arr.at(i);
		for (int j = i - 1; j >= 0; --j) {
			printf("check: arr[%d]:%d = %d\n", j, arr[j], (arr.at(j) > key));
			if (arr.at(j) > key) {
				arr[j + 1] = arr[j];
				arr[j] = key;
			}
		}
		printf("Current state:\n");
		for (int i = 0; i < length; ++i) {
			printf("%d ", arr.at(i));
		}
		printf("\n");
	}
	//outputing the sorted array
	printf("After sorted:\n");
	for (int i = 0; i < length; ++i) {
		printf("%d ", arr.at(i));
	}
	printf("\n");
	return 0;
}
