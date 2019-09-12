#include<bits/stdc++.h>

using namespace std;

char week_day_names[][30] = {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
    "Friday", "Saturday"
};

char month_names[][30] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

int dayToWeek(int day, int month, int year) {
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 2;
    return (year + year / 4 - year / 100 + year / 400 + t[month] + day) % 7;
}

int dayCount(int month, int year, char type) {
    int dayM[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (type == 'g') {
        if (
            year % 400 == 0 ||
            (
                year % 100 != 0 &&
                year % 4 == 0
            )
        ) {
            dayM[1] = 29;
        }
    } else {
        if (year % 4 == 0) {
            dayM[1] = 29;
        }
    }
    return dayM[month];
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("check.txt", "w", stdout);
    int day, month, year, week_day;
    char week_day_name[30], month_name[30];
    while (scanf("%s", week_day_name)) {
        if (week_day_name[0] == '#') {
            break;
        }
        scanf("%d %s %d", &day, month_name, &year);
        for (int i = 0; i < 12; i++) {
            if (strcmp(month_name, month_names[i]) == 0) {
                month = i;
                break;
            }
        }
        for (int i = 0; i < 12; i++) {
            if (strcmp(week_day_name, week_day_names[i]) == 0) {
                week_day = i;
                break;
            }
        }
        if (week_day == dayToWeek(day, month, year)) {
            //printf("%d %d Gregorian\n",dayToWeek(day, month, year), week_day);
            day = day - (year - 1) / 100 + (year - 1) / 400;
            day += 2; //gregorian calender is 2 days late in jan, 1, 0000
            if (day < 1) {
                month--;
                if (month < 0) {
                    year--;
                    month = 11;
                }
                day += dayCount(month, year, 'g');
            }
            printf("%s %d* %s %d\n", week_day_name, day, month_names[month], year);
        } else {
            //printf("%d %d Julian\n",dayToWeek(day, month, year), week_day);
            day = day + (year - 1) / 100 - (year - 1) / 400;
            day -= 2; //gregorian calender is 2 days late in jan, 1, 0000
            if (day > dayCount(month, year, 'g')) {
                day -= dayCount(month, year, 'g');
                month++;
                if (month > 11) {
                    year++;
                    month = 0;
                }

            }
            printf("%s %d %s %d\n", week_day_name, day, month_names[month], year);
        }
    }
    return 0;
}
