//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    // If lengths differ, they can’t be anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};

    // Count frequency of each character in s
    for (int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    // Subtract frequency for each character in t
    for (int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}