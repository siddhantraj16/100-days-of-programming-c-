//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100], longest[100];
    int i = 0, j = 0, maxLen = 0;

    // Read the sentence
    fgets(str, sizeof(str), stdin);

    // Traverse through the string
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';  // End of a word
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;  // Reset for next word
        }
        i++;
    }

    // Check the last word (in case there's no space at the end)
    word[j] = '\0';
    if (j > maxLen) {
        strcpy(longest, word);
    }

    printf("%s\n", longest);
    return 0;
}