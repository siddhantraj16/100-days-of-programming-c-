//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    enum Role role;

    scanf("%s", input);

    // Convert string to enum value
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else if (strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid Role\n");
        return 0;
    }

    // Output message
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;

        case USER:
            printf("Welcome User!\n");
            break;

        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}