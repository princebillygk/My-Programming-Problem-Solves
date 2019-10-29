#include <bits/stdc++.h>
using namespace std;

map<int , int> prime_factors;

int main() {
	stringstream input;
	map<int, int>::iterator index;
	string t_string;
	int t_number, t_power, number;
	bool isInserted;
	
	while(getline(cin, t_string) && t_string != "0") {
		//cout << t_string << endl;
		number = 1;
		input << t_string;
		while (input >> t_number) {
			input >> t_power;
			//printf("%d %d ... ", t_number, t_power);
			number *= pow(t_number, t_power);
		}
		//cout << endl;
		//cout << number << endl;	
		--number;
		//cout << "New number: " << number << endl;
		for (int i = 2; i * i <= number; i++) {
			isInserted = false;
			while (number % i == 0) {
				if (isInserted) {
					index -> second++;
				} else {
					index = prime_factors.insert({i, 1}).first;
					isInserted = true;
				}	
				number /= i;
				//printf("%d ...", number);
			}
	 		//cout << number << endl;
		}
		if (number > 1) {
			prime_factors.insert({number, 1});
		}
		for (map<int, int>::reverse_iterator it = prime_factors.rbegin();
			   	it != prime_factors.rend();
				it++) {
			printf("%d %d", it -> first, it -> second);
			if (next(it) != prime_factors.rend()) {
				printf(" ");
			}
		}
		printf("\n");

		//preparing for next iteration
		prime_factors.clear();
		input.clear();
	}
	return 0;
}

