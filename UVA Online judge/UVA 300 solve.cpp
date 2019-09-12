#include<iostream>
#include<cstdio>
#include<cstring>

#define H_YEAR_DAY 365
#define H_MONTH 19
#define H_YEAR_18MONTHS_DAY 20
#define T_YEAR_DAY 260
#define T_TYPE 13
#define T_TYPE_DAY 20

using namespace std;

char h_months_name[][20] = {
    "pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol",
    "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax",
    "koyab", "cumhu","uayet"
};

char t_type_names[][20] = {
    "imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik",
    "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem",
    "cib", "caban", "eznab", "canac", "ahau"
};




int main() {
    freopen("input.txt","r",stdin);
    freopen("check.txt","w",stdout);

    int test_case, h_day, h_year, h_month, number_of_day,
    t_day_name, t_type, t_year;
    char h_month_name[20];

    scanf("%d", &test_case);
    printf("%d\n", test_case);

    for (int i = 0; i < test_case; i++) {
        scanf("%d. %s %d", &h_day, h_month_name, &h_year);

        for (int i = 0; i < H_MONTH; i++) {
            if (strcmp(h_month_name, h_months_name[i]) == 0) {
                h_month = i+1;
            }
        }

        number_of_day = h_year * H_YEAR_DAY
                        + (h_month - 1) * H_YEAR_18MONTHS_DAY
                        +h_day + 1;

        //printf("number of day: %d\n", number_of_day);
        t_day_name = (number_of_day - 1) % T_TYPE_DAY;
        //printf("%s\n", t_type_names[t_day_name]);

        if (number_of_day % T_YEAR_DAY == 0) {
            t_year = number_of_day / T_YEAR_DAY -1;
            t_type = T_TYPE;
        } else {
            t_year = number_of_day / T_YEAR_DAY;
            number_of_day = number_of_day % T_YEAR_DAY;
            if (number_of_day % T_TYPE == 0) {
                t_type = T_TYPE;
            } else {
                t_type = number_of_day % T_TYPE;
            }
        }

        printf("%d %s %d\n", t_type, t_type_names[t_day_name], t_year);
    }


    return 0;
}
