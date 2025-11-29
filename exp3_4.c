#include <stdio.h>

int main() {
    int year, days = 0;
    char *week[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    printf("Enter year: ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            days += 366;
        else
            days += 365;
    }

    printf("1st January %d is %s", year, week[days % 7]);
    return 0;
}
