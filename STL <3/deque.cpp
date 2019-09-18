#include <iostream>
#include<deque>
#include <algorithm>
using namespace std;

int main() {
	deque<int> mydeq;
	printf("deque size now: %lu, deque empty(): %d\n",
		   	mydeq.size(), mydeq.empty());
	mydeq.push_back(1);
	mydeq.push_front(2);
	mydeq.push_back(4);
	mydeq.push_back(3);
	for (int i : mydeq) {
		printf("%d\n", i);
	}
	deque<int> mydeq2(mydeq);
	printf("mydeq2:\n");
	for (int i : mydeq2) {
		printf("%d\n", i);
	}
	deque<int> mydeq3;
	mydeq3.push_front(100);
	mydeq3.push_back(120);
	mydeq3.push_front(103);
	mydeq3.push_back(130);
	printf("mydeq3:\n");
	for (int i : mydeq3) {
		printf("%d\n", i);
	}
	//swap
	mydeq3.swap(mydeq2);
	printf("mydeq2:\n");
	for (int i : mydeq2) {
		printf("%d\n", i);
	}
	printf("mydeq3\n");
	for (int i : mydeq) {
		printf("%d\n", i);
	}
	mydeq.clear();
	mydeq2.clear();
	mydeq3.clear();
	printf("mydeq deque size now: %lu, deque empty(): %d\n",
		   	mydeq.size(), mydeq.empty());
	printf("mydeq2 deque size now: %lu, deque empty(): %d\n",
		   	mydeq2.size(), mydeq2.empty());
	printf("mydeq3 deque size now: %lu, deque empty(): %d\n",
		   	mydeq3.size(), mydeq.empty());
	return 0;
}
