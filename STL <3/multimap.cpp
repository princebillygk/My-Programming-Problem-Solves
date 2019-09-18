#include<iostream>
#include<map>

using namespace std;

int main() {
	multimap<string, int> mymultimap;
	multimap<string, int>::iterator it1, it2;
	printf("size: %lu, empty: %d\n", mymultimap.size(), mymultimap.empty());
	for (it1 = mymultimap.begin(); it1 != mymultimap.end(); it1++) {
		cout<<it1->first
			<<" : "
			<<it1->second
			<<endl;
	}
	mymultimap.insert(make_pair("prince", 1200));
	mymultimap.insert(make_pair("prince", 3));
	mymultimap.insert(make_pair("steve", 110));
	mymultimap.insert(make_pair("liam", 12));
	mymultimap.insert(make_pair("abid", 234));
	mymultimap.insert(make_pair("ali", 1100));
	printf("After adding some elements\n");
	printf("size: %lu, empty: %d\n", mymultimap.size(), mymultimap.empty());
	for (it1 = mymultimap.begin(); it1 != mymultimap.end(); it1++) {
		cout<<it1->first
			<<" : "
			<<it1->second
			<<endl;
	}
	return 0;
}
