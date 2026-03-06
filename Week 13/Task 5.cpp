#include <stdio.h>

int countEven(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = countEven(arr, n);
    printf("Number of even elements: %d\n", evenCount);

    return 0;
}
