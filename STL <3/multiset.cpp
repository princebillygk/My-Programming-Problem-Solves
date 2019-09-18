#include <iostream>
#include <set>

using namespace std;

int main() {
	multiset<string> mymultiset;
	multiset<string>::iterator it1, it2;
	printf("size: %lu, empty: %d\n", mymultiset.size(), mymultiset.empty());
	mymultiset.insert("Prince Billy Graham Karmoker");
	mymultiset.insert("Liam Patric D rozario");
	mymultiset.insert("Steve Nicholas Gonsalves");
	mymultiset.insert("Steve Nicholas Gonsalves");
	mymultiset.insert("Steve Nicholas Gonsalves");
	mymultiset.insert("Tarun");
	printf("size: %lu, empty: %d\n", mymultiset.size(), mymultiset.empty());
	for (it1 = mymultiset.begin(); it1 != mymultiset.end(); it1++) {
		cout<<*it1<<endl;
	}
	mymultiset.erase("Steve Nicholas Gonsalves");
	
	printf("size: %lu, empty: %d\n", mymultiset.size(), mymultiset.empty());
	for (it1 = mymultiset.begin(); it1 != mymultiset.end(); it1++) {
		cout<<*it1<<endl;
	}
	return 0;
}	
