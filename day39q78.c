//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

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

    // Ensure matrix is square
    if (rows != cols) {
        printf("Not a square matrix\n");
        return 0;
    }

    int sum = 0;

    // Sum of main diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}