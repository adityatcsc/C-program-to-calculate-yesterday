#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter today's date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Calculate yesterday's date
    if (day > 1) {
        day--;
    } else {
        if (month == 1) {
            month = 12;
            year--;
        } else {
            month--;
        }
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            day = 30;
        } else if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                day = 29;
            } else {
                day = 28;
            }
        } else {
            day = 31;
        }
    }

    printf("Yesterday's date was %d/%d/%d\n", day, month, year);
    return 0;
}

