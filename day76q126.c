//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char line[100];

    // Take filename from user
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open file in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("File content:\n");

    // Read and display file content line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}