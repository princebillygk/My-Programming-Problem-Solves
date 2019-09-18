#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myvec, myvec3;
    myvec.push_back(12);
    myvec.push_back(1);
    myvec.push_back(34);
    myvec.push_back(-214);
    myvec.push_back(234);
    
    //different ways of printing vector
    printf("Print using for loop new:\n");
    for (int i : myvec) {
        printf("%d\n", i);
    }

    printf("Print using itterator:\n");
    for (vector<int>::iterator itr = myvec.begin(); itr < myvec.end(); itr++) {
        printf("%d\n", *itr);
    }

    printf("Print using auto iterator:\n");
    for(auto i = myvec.begin(); i < myvec.end(); i++) {
        printf("%d\n", *i);
    }
    
    //common container function
    //size
    printf("Size of current myvec: %lu\n", myvec.size());
    //copy constructor
    vector<int> myvec2(myvec);
    printf("myvec2:\n");
    for (int i : myvec2) {
        printf("%d\n", i);
    }

    myvec3.push_back(3);
    myvec3.push_back(2);
    myvec3.push_back(1);

    printf("myvec3:\n");
    for (int i : myvec3) {
        printf("%d\n", i);
    }
    myvec2.swap(myvec3);
    printf("After swap:\n");
    printf("myvec2:\n");
    for (int i : myvec2) {
        printf("%d\n", i);
    }
    
    printf("myvec3:\n");
    for (int i : myvec3) {
        printf("%d\n", i);
    }
    //clearing vector
    myvec.clear();
    printf("Size of current myvec after .clear(): %lu\n", myvec.size());
    return 0;
}
