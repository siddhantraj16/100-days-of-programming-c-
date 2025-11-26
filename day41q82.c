//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    // Read input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Print each character until null terminator or newline
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}