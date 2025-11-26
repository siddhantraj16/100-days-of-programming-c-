//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    digits = (int)log10(num);

    first = num / pow(10, digits);

    swapped = last * pow(10, digits) + (num % (int)pow(10, digits)) / 10 * 10 + first;

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}