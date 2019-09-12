#include<iostream>
#include<cstdio>

using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("debug.txt", "w", stdout);

	int a, b, c, n;

	scanf ("%d", &n);

	if (n < 2) {
		scanf ("%*d");
		printf("YES\n");
	} else if (n > 2) {
		for (int i = 0; i < 2; i++) {
			scanf ("%*d");
		}
		printf("NO\n");
	} else {
		scanf("%d %d %d", &a, &b, &c);
		n = b*b - 4 * a * c;
		if (n >=0 ) {
			printf("NO\n");
		} else {
            printf("YES\n");
        }
	}
	return 0;
}
