#include <stdio.h>

int main() {
    int var1, var2;

    printf("Enter value for var1: ");
    scanf("%d", &var1);
    printf("Enter value for var2: ");
    scanf("%d", &var2);

    printf("\nBefore swapping: var1 = %d, var2 = %d\n", var1, var2);

    int temp; 
    temp = var1;
    var1 = var2;
    var2 = temp; 

    printf("After swapping: var1 = %d, var2 = %d\n", var1, var2);

    return 0;
}
