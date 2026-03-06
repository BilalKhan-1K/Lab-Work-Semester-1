#include <stdio.h>
#include <math.h>

void rectangle() {
    float length, breadth;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Area of Rectangle: %.2f\n", length * breadth);
    printf("Perimeter of Rectangle: %.2f\n", 2 * (length + breadth));
}

void circle() {
    float radius;
    const float PI = 3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of Circle: %.2f\n", PI * radius * radius);
    printf("Perimeter (Circumference) of Circle: %.2f\n", 2 * PI * radius);
}

void triangle() {
    float base, height, side1, side2, side3;
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    printf("Area of Triangle: %.2f\n", 0.5 * base * height);
    printf("Perimeter of Triangle: %.2f\n", side1 + side2 + side3);
}

void cube() {
    float side;
    printf("Enter the side length of the cube: ");
    scanf("%f", &side);
    printf("Surface Area of Cube: %.2f\n", 6 * side * side);
    printf("Volume of Cube: %.2f\n", side * side * side);
}

int main() {
    int choice;
    do {
        printf("\nChoose a shape to calculate:\n");
        printf("1. Rectangle\n");
        printf("2. Circle\n");
        printf("3. Triangle\n");
        printf("4. Cube\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                rectangle();
                break;
            case 2:
                circle();
                break;
            case 3:
                triangle();
                break;
            case 4:
                cube();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

