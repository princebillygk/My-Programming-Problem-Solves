#include<iostream>
#include<map>

using namespace std;

int main() {
	map<string, int> mymap;
	map<string, int>::iterator it1, it2;
	printf("size: %lu, empty: %d\n", mymap.size(), mymap.empty());
	for (it1 = mymap.begin(); it1 != mymap.end(); it1++) {
		cout<<it1->first
			<<" : "
			<<it1->second
			<<endl;
	}
	mymap.insert(make_pair("prince", 1200));
	mymap.insert(make_pair("steve", 110));
	mymap.insert(make_pair("liam", 12));
	mymap.insert(make_pair("abid", 234));
	mymap.insert(make_pair("ali", 1100));
	printf("After adding some elements\n");
	printf("size: %lu, empty: %d\n", mymap.size(), mymap.empty());
	for (it1 = mymap.begin(); it1 != mymap.end(); it1++) {
		cout<<it1->first
			<<" : "
			<<it1->second
			<<endl;
	}
	return 0;
}
