#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result, digits;

    printf("Armstrong numbers between 0 and 999 are:\n");

    for (num = 0; num <= 999; num++) {
        original = num;
        result = 0;

        digits = (int)log10(num) + 1;

        while (original != 0) {
            remainder = original % 10;
            result += pow(remainder, digits);
            original /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}

