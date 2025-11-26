//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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

    // Traverse diagonals starting from first row
    for (int col = 0; col < cols; col++) {
        int i = 0, j = col;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    // Traverse diagonals starting from second row (leftmost column)
    for (int row = 1; row < rows; row++) {
        int i = row, j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}