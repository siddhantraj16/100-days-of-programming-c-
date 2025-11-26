//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, i, pos, value;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &pos, &value);

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}