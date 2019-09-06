#include<bits/stdc++.h>
using namespace std;

int kmp(char*, char*);
void genLps(char*,int, int *);

int main() {
//*
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
//*/

    char str[1000], pattern[1000];

    while(scanf("%s %s",str, pattern)!=EOF) {
        printf("%d\n", kmp(str, pattern));
    }

}

int kmp(char* str, char* pattern) {

    int pattern_len = strlen(pattern), str_len = strlen(str);
    int lps[pattern_len], i, j;

    genLps(pattern, pattern_len, lps);

    for(i = 0, j = 0; i < str_len && j < pattern_len; ) {
        if (str[i] == pattern[j]) {
            i++;
            j++;
        } else if (j == 0) {
            i++;
        } else {
            j = lps[j - 1];
        }
    }

    if (j == pattern_len)
        return i - j;
    else
        return -1; //not found
}


void genLps(char* pattern,int pattern_len, int* lps) {
    lps[0]=0;

    for (int i = 1, j = 0; i < pattern_len;) {
        if (pattern[i] == pattern[j]) {
            lps[i] = j+1;
            i++;
            j++;
        } else if (j==0) {
            lps[i]= 0;
            i++;
        } else {
            j = lps[j - 1];
        }
    }
    /*debug
    printf("%s\n", pattern);
    for (int i = 0; i < pattern_len; i++) {
        printf("%d", lps[i]);
    }
    printf("\n");
    //*/
}









