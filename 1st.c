#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;
    
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    
    printf("Enter time (in years): ");
    scanf("%f", &time);
    
    // Calculate Simple Interest
    si = (principal * rate * time) / 100;
    
    // Calculate Compound Interest
    ci = principal * pow((1 + rate / 100), time) - principal;
    
    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    
    return 0;
}
