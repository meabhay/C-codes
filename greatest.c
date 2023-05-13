#include <stdio.h>

int main() {
    int num1, num2, num3, max;
    
    // Accept three numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    
    // Find the greatest of three numbers
    max = num1; // Assume the first number is the greatest
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    
    // Display the greatest number
    printf("The greatest number is: %d\n", max);
    
    return 0;
}
