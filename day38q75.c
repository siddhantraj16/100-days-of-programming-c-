//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    
    // Read dimensions of first matrix
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    
    // Read first matrix
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Read dimensions of second matrix
    scanf("%d %d", &rows2, &cols2);
    int matrix2[rows2][cols2];
    
    // Read second matrix
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Check if addition is possible
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    int sum[rows1][cols1];
    
    // Add both matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Print result
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}