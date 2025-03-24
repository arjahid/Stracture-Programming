#include <stdio.h>

int main() {
    int size;

    // Taking input for matrix size (square matrix)
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    // Taking input for the matrix
    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the matrix
    printf("Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Printing the Primary Diagonal
    printf("Primary Diagonal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);  // Primary diagonal condition: i == j
    }
    printf("\n");

    // Printing the Secondary Diagonal
    printf("Secondary Diagonal: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][size - 1 - i]);  // Secondary diagonal condition: i + j == size - 1
    }
    printf("\n");

    return 0;
}
