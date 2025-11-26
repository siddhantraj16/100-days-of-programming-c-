//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);  // Read number of rows and columns

    int matrix[rows][cols];
    
    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A matrix must be square to be symmetric
    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int isSymmetric = 1;  // Assume true initially
    
    // Check symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}