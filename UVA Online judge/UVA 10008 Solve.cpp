#include<iostream>
#include<cstdio>

using namespace std;


int main() {
	freopen("input.txt", "r", stdin);
	freopen("debug.txt", "w", stdout);

	int alpha[100], b[100], n, count;
	char a;
	int x;

	scanf("%d", &n);

	for ( int i = 0; i < 26; i++)  {
		alpha[i] = 0;
		b[i] = i;
	}

    /*/
	for(int i = 0; i < 26; i++) {
		printf ("%c=%d\n", i+'A', alpha[i]);
	}
	//*/

	while ((a = getchar()) != EOF) {
		if ( a >= 'a' && a <= 'z') {
            //putchar(a);
			alpha[a - 'a']++;
			//printf(" %d %d \n", a - 'a', alpha[a - 'a']);
		} else if (a >= 'A' && a <= 'Z') {
            //putchar(a);
			alpha[a - 'A']++;
			//printf(" %d %d \n", a - 'A', alpha[a - 'A']);
		}

	}
	/*/
	for(int i = 0; i < 26; i++) {
		printf ("%c=%d\n", i+'A', alpha[i]);
	}
	//*/
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25-i; j++) {
			if (alpha[b[j]] < alpha[b[j+1]]) {
				b[j] = b[j] ^ b[j+1];
				b[j+1] = b[j] ^ b[j+1];
				b[j] = b[j] ^ b[j+1];
			}
		}
	}
	x = 0;
	count = 26;
	while (alpha[b[x]] && count--) {
		printf("%c %d\n", b[x]+'A', alpha[b[x]]);
		x++;
	}

	return 0;
}
