#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int monthDay(int month, int year) {
    int month_array[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 400 == 0 || (year % 100 !=0 && year % 4 == 0) ) {
        month_array[1]++;
    }
    return month_array[month];
}

char week_name_array[][10] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
char month_name_array[][10] = {
    "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
    "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
};

int main() {
    /*/
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stdout);
    //*/
    //INPUT VARIABLES
    int week_day, day, month, year,
        hour, minute, sec,
        hour_diff, min_diff;
    char day_name[10], month_name[10], timezone[10], sign;

    while (
        scanf(
            "%s %d %s %d %d:%d:%d %s",
            day_name, &day, month_name, &year,
            &hour, &minute, &sec, timezone
        ) != EOF
    ) {
        //WEEK_DAY CALCULATION
        //convert week to array index
        if (strncmp(day_name, "MON", 3) == 0) {
            week_day = 0;
        } else if (strncmp(day_name, "TUE", 3) == 0) {
            week_day = 1;
        } else if (strncmp(day_name, "WED", 3) == 0) {
            week_day = 2;
        } else if (strncmp(day_name, "THU", 3) == 0) {
            week_day = 3;
        } else if (strncmp(day_name, "FRI", 3) == 0) {
            week_day = 4;
        } else if (strncmp(day_name, "SAT", 3) == 0) {
            week_day = 5;
        } else if (strncmp(day_name, "SUN", 3) == 0) {
            week_day = 6;
        } else if (strncmp(day_name, "SUN", 3) == 0) {
            week_day = 7;
        }
        //MONTH CALCULATION
        //convert monthe to aray index
        if (strcmp(month_name, "JAN") == 0) {
            month = 0;
        } else if (strcmp(month_name, "FEB") == 0) {
            month = 1;
        } else if (strcmp(month_name, "MAR") == 0) {
            month = 2;
        } else if (strcmp(month_name, "APR") == 0) {
            month = 3;
        } else if (strcmp(month_name, "MAY") == 0) {
            month = 4;
        } else if (strcmp(month_name, "JUN") == 0) {
            month = 5;
        } else if (strcmp(month_name, "JUL") == 0) {
            month = 6;
        } else if (strcmp(month_name, "AUG") == 0) {
            month = 7;
        } else if (strcmp(month_name, "SEP") == 0) {
            month = 8;
        } else if (strcmp(month_name, "OCT") == 0) {
            month = 9;
        } else if (strcmp(month_name, "NOV") == 0) {
            month = 10;
        } else if (strcmp(month_name, "DEC") == 0) {
            month = 11;
        }
        //YEAR CALCULATION
        if (year / 100 == 0) {
            year += 1900;
        }
        //TIMEZONE CALCULATION
        //convert time zone to variables
        if (strcmp(timezone, "UT") == 0 || strcmp(timezone, "GMT") == 0) {
            hour += 3;
        } else if (strcmp(timezone, "EDT") == 0) {
            hour += 7;
        } else if (strcmp(timezone, "CDT") == 0) {
            hour += 8;
        } else if (strcmp(timezone, "MDT") == 0) {
            hour += 9;
        } else if (strcmp(timezone, "PDT") == 0) {
            hour += 10;
        } else { //converting digits to timezone varriable
            sscanf(timezone, "%c%2d%2d", &sign, &hour_diff, &min_diff);
            if (sign == '-') {
                hour = hour - (hour_diff - 3);
                minute += min_diff;
            } else {
                hour = hour + (3 - hour_diff);
                minute -= min_diff;
            }
        }
        /*input debug
        printf("%s = %s\n", day_name, week_array[week_day]);
        printf("day = %d\n", day);
        printf("%s = %s\n", month_name, month_array[month]);
        printf("Time: %02d:%02d:%02d\n", hour, minute, sec);
        printf("%s = %c %d %d\n\n", timezone, sign, hour_diff, min_diff);
        //*/



        //*
        if (minute < 0) {
            minute += 60;
            hour--;
        } else if (minute >= 60) {
            minute -= 60;
            hour++;
        }

        if (hour < 0) {
            hour+= 24;
            day--;
            week_day = (week_day-1 + 7)%7;
            if(day <= 0) {
                month--;
                if (month < 0) {
                    month = 11;
                    year --;
                }
                day = monthDay(month, year);
            }
        } else if (hour >= 24) {
            hour -= 24;
            week_day = (week_day+1 + 7)%7;
            day++;
            if (day > monthDay(month, year)) {
                day = 1;
                month++;
                if (month > 11) {
                    month = 0;
                    year++;
                }
            }
        }
        /*/
        printf("%d, %d %d %d %d:%d:%d +0300\n",
        week_day, day,
        month, year,
        hour, minute, sec);
        //*/
        printf("%s, %02d %s %02d %02d:%02d:%02d +0300\n",
        week_name_array[week_day], day,
        month_name_array[month], year,
        hour, minute, sec);
        //*/
    }
    return 0;
}







