#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float pi = 3.14159265358979323846;
    
    // Accept radius of circle from user
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    // Calculate area and circumference
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    
    // Display results
    printf("Area of circle: %.2f sq units\n", area);
    printf("Circumference of circle: %.2f units\n", circumference);
    
    return 0;
}
