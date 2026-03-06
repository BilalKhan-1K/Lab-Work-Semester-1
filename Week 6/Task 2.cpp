#include <stdio.h>

int main() {
    int n, reverse = 0, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n; 

    while (n > 0) {
        digit = n % 10;   
        sum += digit;          
        reverse = reverse * 10 + digit;
        n /= 10;              
    }

  
    printf("The reverse of %d is %d\n", original, reverse);
    printf("The sum of digits of %d is %d\n", original, sum);

    return 0;
}

