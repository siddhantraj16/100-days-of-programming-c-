//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};  // Frequency array for lowercase letters
    int i = 0;
    char result = '\0';

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Traverse string to find first repeating lowercase character
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {  // Found repeating character
                result = ch;
                break;
            }
        }

        i++;
    }

    if (result != '\0')
        printf("%c\n", result);
    else
        printf("No repeating character\n");

    return 0;
}