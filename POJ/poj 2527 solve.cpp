#include <iostream>
#include<cstdio>
using namespace std;


int main() {
    freopen("input.txt", "r", stdin);
    freopen("debug.txt", "w", stdout);

    int n, k, loop_ends_here;
    int coef[10000];
    int top;

    while (1) {
        scanf("%d %d", &n, &k);
        if (n == -1 && k == -1) {
            break;
        }
        //input coef
        for (int i = 0; i <= n; i++) {
            scanf("%d", &coef[i]);
            //printf("%d ", coef[i]);
        }
        //printf("\n");
        loop_ends_here=n;
        for (int top = n; top >= k; --top) {
            //printf("loop working man\n");
            //printf("top: %d coef: %d k:%d\n", top, coef[top],k);
            coef[top - k] -= coef[top];
            coef[top] = 0;
            loop_ends_here= top-1;
            /*
            for (int i = n; i >= 0; i--) {
                printf("%d ", coef[i]);
            }
            printf("\n");
            //*/
        }
        //printf("top: %d\n", top);
        if(loop_ends_here == -1) {
            printf("0\n");
        } else {
            //*
            for (int i = 0; i <= loop_ends_here; i++) {
                if (i!=0) printf(" ");
                printf("%d", coef[i]);
            }
            printf("\n");
            //*/
            /*
            while(loop_ends_here >= 0) {
                printf("%d", coef[loop_ends_here]);
                if(loop_ends_here != 0) printf(" ");
                loop_ends_here--;
            } printf("\n");
            //*/
        }

    }
    //printf("got this far\n");

    return 0;
}
