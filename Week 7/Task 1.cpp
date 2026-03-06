#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {

    int testYears[] = {1900, 2000, 2004, 2023, 2024};
    int numTests = sizeof(testYears) / sizeof(testYears[0]);

    printf("Leap Year Test Cases:\n");
    for (int i = 0; i < numTests; i++) {
        int year = testYears[i];
        if (isLeapYear(year)) {
            printf("Year %d: Leap Year\n", year);
        } else {
            printf("Year %d: Not a Leap Year\n", year);
        }
    }

    int year;
    printf("\nEnter a year to check: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("Year %d is a Leap Year.\n", year);
    } else {
        printf("Year %d is Not a Leap Year.\n", year);
    }

    return 0;
}

