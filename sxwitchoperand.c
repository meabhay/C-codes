#include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operator;

    printf("Enter the first operand: ");
    scanf("%f", &operand1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second operand: ");
    scanf("%f", &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}
