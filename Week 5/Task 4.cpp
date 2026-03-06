#include <stdio.h>

void determineTriangleType(double a, double b, double c) {
    if (b > a && b > c) {
        double temp = a;
        a = b;
        b = temp;
    } else if (c > a) {
        double temp = a;
        a = c;
        c = temp;
    }

    if (a >= b + c) {
        printf("No triangle is formed.\n");
    } else {
        
        double a2 = a * a;
        double b2 = b * b;
        double c2 = c * c;

        if (a2 == b2 + c2) {
            printf("A right-angled triangle is formed.\n");
        } else if (a2 > b2 + c2) {
            printf("An obtuse-angled triangle is formed.\n");
        } else if (a2 < b2 + c2) {
            printf("An acute-angled triangle is formed.\n");
        }
    }
}

int main() {
    double a, b, c;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    determineTriangleType(a, b, c);

    return 0;
}

