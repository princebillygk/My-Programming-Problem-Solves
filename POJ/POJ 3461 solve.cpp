#include <iostream>
#include<cstdio>
#include<cstring>

#define MAXTXT 1000010
#define MAXWORD 10010

using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    char txt[MAXTXT], word[MAXWORD];
    int test_case, event;
    //kpm algorithm variables
    int word_len, txt_len, lps[MAXWORD];
    scanf("%d", &test_case);
    while (test_case--) {
        event = 0;
        scanf("%s %s", word, txt);
        word_len = strlen(word);
        txt_len = strlen(txt);
        //lps generation algorithm
        for (int i = 1, j = 0; i < word_len;) {
            if (word[i] == word[j]) {
                j++;
                lps[i] = j;
                i++;
            } else if (j == 0) {
                lps[i] = 0;
                i++;
            } else {
                j = lps[j - 1];
            }
        }
        /*/lps debug
        printf("%s\n", word);
        for (int i = 0; i < word_len; i++) {
            /printf("%d", lps[i]);
        }
        printf("\n");
        //*/
        //cout<<txt_len<<"**"<<endl;
        for (int i = 0, j = 0; i < txt_len;) {
            if (txt[i] == word[j]) {
                i++;
                j++;
            } else if (j == 0) {
                i++;
            } else {
                j = lps[j - 1];
            }
            if (j == word_len) {
                event++;
                j = lps[j - 1];
            }
            //cout<<j<<" ";
        }

        printf("%d\n",event);
    }
    return 0;
}




















