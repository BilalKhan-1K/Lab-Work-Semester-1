#include <stdio.h>
void swapWithTemp(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapWithoutTemp(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void swapValueWithTemp(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %d, b = %d\n", a, b);
}
void swapValueWithoutTemp(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap: a = %d, b = %d\n", a, b);
}
int main() {
    int x,y,u,v;
    printf("Enter two integers :\n");
    scanf("%d %d", &x, &y);
    u = x; v = y;
    printf("\n...Call by Reference...\n");
    printf("Original Values : x = %d, y = %d\n", x, y);
    printf("\nSWAPPING USING THIRD VARIABLE\n");
    swapWithTemp(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    printf("\nSWAPPING WITHOUT USING THIRD VARIABLE\n");
    swapWithoutTemp(&v, &u);
    printf("After swap: x = %d, y = %d\n", u, v);
    
    printf("\nEnter two integers :\n");
    scanf("%d %d", &x, &y); 
	    
    printf("\n...Call by Value...\n");
    printf("Original Values : x = %d, y = %d\n", x, y);
    printf("\nSWAPPING USING THIRD VARIABLE\n");
    swapValueWithTemp(x, y);
    printf("\nSWAPPING WITHOUT USING THIRD VARIABLE\n");
    swapValueWithoutTemp(x, y);
    return 0;
}
