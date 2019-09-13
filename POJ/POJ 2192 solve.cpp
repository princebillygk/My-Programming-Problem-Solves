#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("debug.txt", "w", stdout);

    int n, pointerA, pointerB, lenA, lenB, lenC;
    char a[500], b[500], c[500],temp;
    bool failed, f_temp;

    scanf("%d", &n);
    for (int Case = 0; Case < n; ++Case) {
        printf("Data set %d: ", Case + 1);
        failed = false;
        pointerA = 0;
        pointerB = 0;
        temp = '0';
        f_temp = false;
        scanf("%s %s %s", a, b, c);
        lenA = strlen(a);
        lenB = strlen(b);
        lenC = strlen(c);
        //printf("%d %d %d\n", lenA, lenB, lenC);
        if(lenA + lenB != lenC) {
            failed = true;
        }
        for (int i = 0; i < lenC && !failed; ++i) {
            //printf("%c %c %c %c\n", c[i], a[pointerA], b[pointerB], temp);
            if(c[i] == a[pointerA] && c[i] == b[pointerB]){
               temp = a[pointerA];
               ++pointerA;
               ++pointerB;
            } else if (c[i] == a[pointerA] && pointerA < lenA) {
                ++pointerA;
                if (f_temp) {
                    f_temp = false;
                    --pointerB;
                }
            } else if (c[i] == b[pointerB] && pointerB < lenB) {
                ++pointerB;
                if (f_temp) {
                    f_temp = false;
                    --pointerA;
                }
            } else if (c[i] == temp) {
                temp = '0';
                f_temp = true;
            } else {
                failed = true;
                //break;
            }
        }

        if (failed) {
            printf("no\n");
        } else {
            printf("yes\n");
        }
    }

}
