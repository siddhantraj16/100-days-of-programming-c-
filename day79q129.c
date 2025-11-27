//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>

int main() {
    FILE *fp;
    int num;
    int sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");   // Open the file in read mode
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file.\n");
        return 0;
    }

    float average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}