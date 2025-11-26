//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1000];
    int i = 0;

    // Read the full name
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    if (name[0] == '\n') return 0;
    name[strcspn(name, "\n")] = '\0';

    // Print the first initial (make sure it’s uppercase)
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    // Print initials after each space
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", toupper(name[i + 1]));
        i++;
    }

    printf("\n");
    return 0;
}