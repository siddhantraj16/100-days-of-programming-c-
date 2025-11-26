//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1); // i-th odd number = 2*i - 1
    }

    // Display result
    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}