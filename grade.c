#include <stdio.h>

char calculateGrade(float percentage) {
    if (percentage >= 90 && percentage <= 100) {
        return 'A';
    } else if (percentage >= 80 && percentage < 90) {
        return 'B';
    } else if (percentage >= 60 && percentage < 80) {
        return 'C';
    } else {
        return 'D';
    }
}

int main() {
    int marks[5];
    printf("Enter marks of five subjects:\n");
    
    // Read marks of five subjects
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    
    // Calculate total marks
    int totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += marks[i];
    }
    
    // Calculate percentage
    float percentage = (float) totalMarks / 5;
    
    // Determine and print the grade
    char grade = calculateGrade(percentage);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    
    return 0;
}
