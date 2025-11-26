//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};  // To store frequency of digits 0–9
    int digit, maxDigit = 0, maxCount = 0;

    // Input the number
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    // Output result
    printf("Digit with maximum occurrence: %d\n", maxDigit);

    return 0;
}