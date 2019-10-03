
#include <bits/stdc++.h> 
using namespace std;
void numtoarr(char *str, int *num, int &array_size) {
	array_size = strlen(str);
	int j = 0;
	for (int i = array_size - 1; i >= 0; i--) {
		num[j++] = str[i] - '0';
	}
}	
int main () {
	freopen("input.txt", "r", stdin);
	freopen("myoutput.txt", "w", stdout);
	char str_num1[510], str_num2[510], sign;
	int num1[1020], num2[510], res[1020], 
		*temp, *temp_len, part[510][510], part_len[510], var_temp;
	int test_case, num1_len, num2_len, res_len;
	bool sub_print_helper;
	int high_len, sec_high_len;
	scanf("%d", &test_case);
	getchar();
	while (test_case--) {
		scanf("%[^*+-]%c%s", str_num1, &sign, str_num2);
		getchar();
		numtoarr(str_num1, num1, num1_len);
		numtoarr(str_num2, num2, num2_len);
		if (num1_len >= num2_len) {
			res_len = num1_len;
			numtoarr(str_num1, res, res_len);
			temp = num2;
			temp_len = &num2_len;
		} else {
			res_len = num2_len;
			numtoarr(str_num2, res, res_len);
			temp = num1;
			temp_len = &num1_len;
		}
		res[res_len] = 0;
		if (sign == '+') {				//addition
			for (int i = 0; i < res_len; i++) {
				if(i < *temp_len) {
					res[i] += temp[i];
				}
				if(res[i] >= 10) {
					res[i] -= 10;
					if (i  == res_len - 1) {
						res_len++;
					} 
					res[i + 1]++;
				}
			}
			high_len = max(num1_len, num2_len+1);
			high_len = max(high_len, res_len);
			printf("%*s\n", high_len, str_num1);
			printf("%*c%s\n", high_len - num2_len, '+', str_num2);
			sec_high_len = max(num2_len + 1, res_len);
			for(int i = 0; i < high_len - sec_high_len; i++) {
				printf(" ");
			}
			for (int i = 0; i < sec_high_len; i++) {
				printf("-");
			}
			printf("\n");
			for(int i = 0; i < high_len - res_len; i++) {
				printf(" ");
			}
			for (int i = res_len - 1; i >= 0; i--) {
				printf("%d", res[i]);
			}
			printf("\n");
		} else if(sign == '-') { 		//sustraction
			for (int i = 0; i < res_len; i++) {
				if (i < *temp_len) {
					res[i] -= temp[i];
				}
				if (res[i] < 0) {
					res[i] += 10;
					res[i + 1]--;
				}
			}
			for (int i = res_len -1; i >= 0; i--) {
				if(res[i] != 0 || i == 0) {
					break;
				}
				res_len--;
			}
			high_len = max(num1_len, num2_len + 1);
			printf("%*s\n", high_len, str_num1);
			printf("%*c%s\n", high_len - num2_len, '-', str_num2);
			sec_high_len = max(num2_len + 1, res_len);
			for(int i = 0; i < high_len - sec_high_len; i++) {
				printf(" ");
			}
			for (int i = 0; i < sec_high_len; i++) {
				printf("-");
			}
			printf("\n");
			for(int i = 0; i < high_len - res_len; i++) {
				printf(" ");
			}
			sub_print_helper = false;
			for (int i = res_len - 1; i >= 0; i--) {
				printf("%d", res[i]);
			}
			printf("\n");
			
		} else {
			res_len = num1_len + num2_len - 1;
			if (
					((num1_len == 1) && (num1[0] == '0')) ||
					((num2_len == 1) && (num2[0] == '0'))
			   ) {
				res_len = 1;
			}
			for(int i = 0; i < res_len + 1;  i++) {
				res[i] = 0;
			}
			for (int i = 0; i < num2_len; i++) {
				part_len[i] = num1_len;
				for (int j = 0; j < num1_len + 1; j++) {
					part[i][j] = 0;
				}
				for (int j = 0; j < num1_len; j++) {
					var_temp = num2[i] * num1[j];
					res[i + j] += var_temp;
					part[i][j] += var_temp;
					if (part[i][j] >= 10) {
						part[i][j + 1] += part[i][j] / 10;
						part[i][j] %= 10;
						if (j == num1_len -1) {
							part_len[i]++;
						}
					}
				}
			}
			for (int i = 0; i < res_len; i++) {
				if (res[i] >= 10) {
					if (i == res_len - 1) {
						res_len++;
					}
					res[i + 1] += res[i] / 10;
					res[i] %= 10;
				}
			}
			for (int i = res_len - 1; i >= 0; i--) {
				if (res[i] != 0 || i == 0) {
					break;
				}
				res_len--;
			}
			high_len = max(num1_len, num2_len + 1);
			high_len = max(high_len, res_len);
			printf("%*s\n", high_len, str_num1);
			printf("%*c%s\n", high_len - num2_len, '*', str_num2);
			if (num2_len > 1) {
				for (int i = part_len[0] - 1; i >= 0; i--) {
					if (part[0][i] != 0 || i == 0) {
						break;
					} 
					part_len[0]--;
				}
				sec_high_len = max(num2_len + 1, part_len[0]);
				for(int i = 0; i < high_len - sec_high_len; i++) {
					printf(" ");
				}
				for (int i = 0; i < sec_high_len; i++) {
					printf("-");
				}
				printf("\n");
				for (int i = 0; i < num2_len; i++) {
					for (int sp = 0; sp < high_len - part_len[i] - i; sp++) {
						printf(" ");
					}	
					sub_print_helper = false;
					for (int j = part_len[i] - 1; j >= 0; j--) {
						if (part[i][j] != 0) {
							sub_print_helper = true;
						}
						if (sub_print_helper || j == 0) {
							printf("%d", part[i][j]);
						} else {
							printf(" ");
						}
					}
					printf("\n");
				}
			}	
			sec_high_len = res_len;
			for(int i = 0; i < high_len - sec_high_len; i++) {
				printf(" ");
			}
			for (int i = 0; i < sec_high_len; i++) {
				printf("-");
			}
			printf("\n");
			for(int i = 0; i < high_len - res_len; i++) {
				printf(" ");
			}
			for (int i = res_len - 1; i >= 0; i--) {
				printf("%d", res[i]);
			}
			printf("\n");
		}
		
		if(test_case != 0) {
			printf("\n");
		}
	}
	return 0;
}
