#include <stdio.h>

int main() {
    int num1, num2;
    
    // Accept two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Check if the two numbers are equal
    if (num1 == num2) {
        printf("The two numbers are equal.\n");
    } else {
        printf("The two numbers are not equal.\n");
    }
    
    return 0;
}
