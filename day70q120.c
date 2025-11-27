//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>   // for toupper() and tolower()

int main() {
    char str[200];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  // read full line with spaces

    int capitalizeNext = 1;  // Flag to capitalize next letter

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == ' ')
            capitalizeNext = 1;
    }

    printf("%s\n", str);
    return 0;
}