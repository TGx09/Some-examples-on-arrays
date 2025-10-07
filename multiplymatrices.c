#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    
    // Check if multiplication is possible
    if(c1 != r2) {
        printf("Matrix multiplication not possible!");
        return 1;
    }
    
    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
    
    // Input first matrix
    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input second matrix
    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Initialize result matrix with zeros
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    
    // Multiply matrices
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    // Print first matrix
    printf("\nFirst Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    
    // Print second matrix
    printf("\nSecond Matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    
    // Print result matrix
    printf("\nResult Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}