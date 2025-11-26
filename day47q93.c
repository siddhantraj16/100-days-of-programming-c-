//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq[26] = {0};  // Frequency array for lowercase letters
    int i = 0;
    int isAnagram = 1;

    // Read two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each character in first string
    while (str1[i] != '\0' && str1[i] != '\n') {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
        i++;
    }

    // Subtract frequency for each character in second string
    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        i++;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}