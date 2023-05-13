#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total_marks, percentage;

    // Accept marks of 5 subjects from user
    printf("Enter marks obtained in subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks obtained in subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks obtained in subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks obtained in subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks obtained in subject 5: ");
    scanf("%f", &sub5);

    // Calculate sum of marks
    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;

    // Calculate percentage marks
    percentage = (total_marks / 500) * 100;

    // Display sum and percentage marks
    printf("Total marks obtained: %.2f\n", total_marks);
    printf("Percentage marks obtained: %.2f%%\n", percentage);

    return 0;
}
