#include <iostream> 
#include<sstream> 
#include<cstdio>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("debug.txt", "w", stdout);

    char  word[][20] = {
       "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "thirty",
        "forty",
        "fifty",
        "sixty",
        "seventy",
        "eighty",
        "ninety",
        "hundred",
        "thousand",
        "million",
    };
    int word_val[] = {
        0, 
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        11,
        12,
        13,
        14,
        15,
        16,
        17,
        18,
        19,
        20,
        30,
        40,
        50,
        60,
        70,
        80,
        90,
        100,
        1000,
        1000000
    };
    //var
    stringstream str;
    string input, curr;
    int index, high, temp;
    long long n;
    bool sign, f_h_1, f_h_2;
    //////clog<<"got this far 1"<<endl;
    while(getline(cin, input)) {
       //clog<<"got this far 2 input: "<<input<<endl;
       n = 0;
       temp = 0;
       high = 0;
       f_h_1 = 0;
       f_h_2 = 0;
       if(input[0] == 'n' && input[1] == 'e' && input[2] == 'g') {
           sign = true;
       } else {
           sign = false;
       }
       ////clog<<"got this far 3 input: "<<input<<endl;
       str = stringstream(input);
       while(str >> curr) {
           ////clog<<"got this far 4 curr: "<<curr<<endl;
           for (int i = 0; i <= 30; i++) {
                if (curr == word[i]) {
                    if(i <= 27){
                        n += word_val[i];
                        temp += word_val[i];
                    } else {
                        if (word_val[i] > high) {
                            n *= word_val[i];
                            high = word_val[i];
                            temp *= word_val[i];
                            if(word_val[i] == 1000000) {
                                f_h_1 =true;
                                temp = 0;
                                f_h_2 = false;
                            } else if( word_val[i] == 1000) {
                                f_h_2 = true;
                            }
                        } else {
                            if (f_h_2) {
                               temp %= 10;
                            }
                            n -= temp;
                            temp *= word_val[i];
                            n += temp;
                            if(f_h_1 && word_val[i] == 1000) {
                                temp = 0;
                            }
                        }
                       ////clog<<"I am here"<<endl;
                    }
                    break;
                }
            }
            //clog<<curr<<" "<<n<<" "<<temp<<endl;
       }
       if(sign && n!=0) {
            printf("-");
       }
       printf("%lld\n", n);
       ////clog<<input<<endl;
    }
    return 0;
}
