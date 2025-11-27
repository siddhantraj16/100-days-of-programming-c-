//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open file in read mode
    fp = fopen("sample.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    // Read each character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Word detection logic
        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    // If file doesn’t end with a newline, adjust line count
    if (characters > 0 && ch != '\n')
        lines++;

    // Display results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    // Close file
    fclose(fp);

    return 0;
}