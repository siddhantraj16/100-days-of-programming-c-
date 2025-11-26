//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;
    int i = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        // Check for vowels (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants (alphabetic but not vowels)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
