#include <stdio.h>

void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("The number %d is even.\n", number);
    } else {
        printf("The number %d is odd.\n", number);
    }
}

int main() {
    int userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    checkEvenOdd(userInput);
    return 0;
}
