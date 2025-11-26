//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;
    
    if (n < 2) {
        printf("Array must have at least two elements\n");
        return 0;
    }

    if (arr[0] > arr[1]) {
        first = arr[0];
        second = arr[1];
    } else {
        first = arr[1];
        second = arr[0];
    }

    for (i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Second largest element: %d\n", second);

    return 0;
}