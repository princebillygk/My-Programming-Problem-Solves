#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>

using namespace std;

char timezone_names[][10] = {
    "UTC", "GMT", "BST", "IST",
    "WET", "WEST", "CET", "CEST",
    "EET","EEST", "MSK", "MSD",
    "AST", "ADT", "NST", "NDT",

    "EST", "EDT", "CST", "CDT",
    "MST", "MDT", "PST", "PDT",
    "HST", "AKST", "AKDT", "AEST",
    "AEDT", "ACST", "ACDT", "AWST"
};

int timezone_hour[] = {
    0, 0, 1, 1,
    0, 1, 1, 2,
    2, 3, 3, 4,
    -4, -3, -3, -2,

    -5, -4, -6, -5,
    -7, -6, -8, -7,
    -10, -9, -8, 10,
    11, 9, 10, 8
};

int timezone_minute[] = {
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, -30, -30,

    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 30, 30, 0
};


int main() {
    freopen("input.txt", "r", stdin);
    freopen("check.txt", "w", stdout);
    int test_case, timezone_old, timezone_new,
        hour, minute;
    char timezone_old_name[10], timezone_new_name[10], time_str[10], moment[10];
    bool flag1, flag2;

    scanf("%d", &test_case);
    getchar();
    while (test_case--) {

        //input
        scanf("%s", time_str);
        if (time_str[0] == 'n') {
            scanf("%s %s",
                  timezone_old_name, timezone_new_name);
            hour = 12;
            minute = 0;
            strcpy(moment, "p.m.");
        } else if (time_str[0] == 'm') {
            scanf("%s %s",
                  timezone_old_name, timezone_new_name);
            hour = 12;
            minute = 0;
            strcpy(moment, "a.m.");
        } else {
            scanf("%s %s %s",
                  moment, timezone_old_name, timezone_new_name);
            sscanf(time_str, "%d:%d", &hour, &minute);
        }


        //printf("%d:%02d %s  ",hour,minute, moment);

        //*12 to 24
        if (hour == 12 && moment[0] == 'a') {
            hour = 0;
        } else if (hour != 12 && moment[0] == 'p') {
            hour += 12;
        }
        //*/


        //timezone_<type>_name to array index
        flag1 = true;
        flag2 = true;
        for (int i = 0; i < 32 && (flag1 || flag2); i++) {
            if (strcmp(timezone_names[i], timezone_old_name) == 0) {
                timezone_old = i;
                flag1 = false;
            }
            if (strcmp(timezone_names[i], timezone_new_name) == 0) {
                timezone_new = i;
                flag2 = false;
            }
        }

        /*debug
        printf("%02d:%02d %s old= %s %d %d new= %s %d %d\n",
               hour, minute, moment,
               timezone_old_name, timezone_hour[timezone_old],
               timezone_minute[timezone_old],
               timezone_new_name, timezone_hour[timezone_new],
               timezone_minute[timezone_new]);//*/


        //conversion
        //printf("%d:%02d  ",hour,minute);
        /*printf("%s-%d %d:%d %s-%d %d:%d  ",
        timezone_names[timezone_old], timezone_old, timezone_hour[timezone_old],
        timezone_minute[timezone_old],
        timezone_names[timezone_new], timezone_new, timezone_hour[timezone_new],
        timezone_minute[timezone_new]
        );*/
        hour += timezone_hour[timezone_new] - timezone_hour[timezone_old];
        minute += timezone_minute[timezone_new] - timezone_minute[timezone_old];
        //printf("%d:%02d  ",hour,minute);
        if (minute < 0) {
            hour--;
            minute += 60;
        } else if (minute >= 60) {
            hour++;
            minute -= 60;
        }
        if (hour < 0) {
            hour += 24;
        } else if (hour >= 24) {
            hour -= 24;
        }

        //printf("%d:%02d  ",hour,minute);

        /*debug
        printf("%02d:%02d %s old= %s %d %d new= %s %d %d\n",
               hour, minute, moment,
               timezone_old_name, timezone_hour[timezone_old],
               timezone_minute[timezone_old],
               timezone_new_name, timezone_hour[timezone_new],
               timezone_minute[timezone_new]);//*/

        //24 to 12
        if(hour >= 12) {
            if (hour != 12) {
                hour -= 12;
            }
            moment[0] = 'p';
        } else {
            if (hour == 0) {
                hour = 12;
            }
            moment[0] = 'a';
        }

        //output
        if(hour == 12 && minute == 0) {
            printf("%s\n" , moment[0] == 'a'? "midnight":"noon");
        } else {
            printf("%d:%02d %s\n",hour,minute, moment);
        }
    }


    return 0;
}


















