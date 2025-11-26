//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];
    char words[100][100];
    int i = 0, j = 0, k = 0, wordCount = 0;

    // Read the full name
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    // Split the name into words
    while (name[i] != '\0') {
        if (name[i] != ' ') {
            words[wordCount][j++] = name[i];
        } else if (j > 0) {
            words[wordCount][j] = '\0';
            wordCount++;
            j = 0;
        }
        i++;
    }

    // Add last word
    if (j > 0) {
        words[wordCount][j] = '\0';
        wordCount++;
    }

    // Print initials for all words except the last one
    for (k = 0; k < wordCount - 1; k++) {
        printf("%c.", toupper(words[k][0]));
    }

    // Print last word (surname) in full
    printf(" %s\n", words[wordCount - 1]);

    return 0;
}