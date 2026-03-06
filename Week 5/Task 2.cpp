#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter Principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (R, in percentage): ");
    scanf("%f", &rate);

    printf("Enter Time in years (T): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    compound_interest = principal * pow(1 + (rate / 100), time) - principal;

    printf("\n--- Results ---\n");
    printf("Simple Interest (SI) = %.2f\n", simple_interest);
    printf("Compound Interest (CI) = %.2f\n", compound_interest);

    return 0;
}
