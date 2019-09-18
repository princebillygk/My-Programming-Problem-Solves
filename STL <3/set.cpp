#include <iostream>
#include <set>

using namespace std;

int main() {
	set<string> myset;
	set<string>::iterator it1, it2;
	printf("size: %lu, empty: %d\n", myset.size(), myset.empty());
	myset.insert("Prince Billy Graham Karmoker");
	myset.insert("Liam Patric D rozario");
	myset.insert("Steve Nicholas Gonsalves");
	myset.insert("Tarun");
	printf("size: %lu, empty: %d\n", myset.size(), myset.empty());
	for (it1 = myset.begin(); it1 != myset.end(); it1++) {
		cout<<*it1<<endl;
	}
	myset.erase("Prince Billy Graham Karmoker");
	
	printf("size: %lu, empty: %d\n", myset.size(), myset.empty());
	for (it1 = myset.begin(); it1 != myset.end(); it1++) {
		cout<<*it1<<endl;
	}
	return 0;
}	
