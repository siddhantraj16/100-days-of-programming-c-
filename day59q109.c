//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }

    // Step 1: Compute sum of first window of size k
    int windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; // add next element, remove first element of previous window
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d\n", maxSum);
    return 0;
}