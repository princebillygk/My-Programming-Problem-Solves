#include <bits/stdc++.h>
using namespace std;
stack<char> sign;
int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("myoutput.txt", "w", stdout);
	int test_case;
	char expression[410];
	scanf("%d", &test_case);
	getchar();
	while (fgets(expression, 410, stdin)) {
		for (int i = 0; expression[i] != '\n'; i++) {
			if (expression[i] >= 'a' && expression[i] <= 'z') {
				printf("%c", expression[i]);
			} else if (expression[i] == '(' ) {
			} else if (expression[i] == ')' ) {
				printf("%c", sign.top());
				sign.pop();
			} else {
				sign.push(expression[i]);
			}
		}
		printf("\n");
	}
	return 0;
}

