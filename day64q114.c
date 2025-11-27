//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;
    int start = 0;  // Start index of current window
    int lastIndex[256];  // To store last seen index of each character

    // Initialize all characters' last seen index to -1
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int end = 0; end < n; end++) {
        // If character was seen before, move start to right of last occurrence
        if (lastIndex[(unsigned char)s[end]] >= start)
            start = lastIndex[(unsigned char)s[end]] + 1;

        // Update last seen index of current character
        lastIndex[(unsigned char)s[end]] = end;

        // Update maximum length
        int currentLen = end - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("%d\n", maxLen);
    return 0;
}