#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nLower Triangular Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i >= j)
                printf("%d\t", matrix[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }

    printf("\nUpper Triangular Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i <= j)
                printf("%d\t", matrix[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }

    return 0;
}
