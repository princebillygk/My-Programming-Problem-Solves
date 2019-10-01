#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("myoutput.txt", "w", stdout);
	char key[30], a;
	scanf("%s", key);
	getchar();
	while ((a = getchar()) != '\n') {
		if (a >= 'A' && a <= 'Z') 
			a = key[a - 'A'] + 'A' - 'a';
		else if (a >= 'a' && a <= 'z') 
			a = key[a - 'a'];
		putchar(a);
	}
	printf("\n");
	return 0;
}
