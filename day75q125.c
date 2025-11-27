//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char newLine[100];

    // Take filename from user
    printf("Enter file name: ");
    scanf("%s", filename);
    getchar(); // To consume newline left by scanf

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    // Take new line input from user
    printf("Enter text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append text to file
    fputs(newLine, fp);

    // Close file
    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}