#include <stdio.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            return 1; // Leap year
        } else {
            return 0; // Not a leap year
        }
    } else {
        return 0; // Not a leap year
    }
}

int main() {
    int userInput;
    printf("Enter a year: ");
    scanf("%d", &userInput);

    if (isLeapYear(userInput)) {
        printf("%d is a leap year.\n", userInput);
    } else {
        printf("%d is not a leap year.\n", userInput);
    }

    return 0;
}
