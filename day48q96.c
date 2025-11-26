//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

void reverseWord(char *word, int start, int end) {
    char temp;
    while (start < end) {
        temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    int i = 0, start = 0;

    // Read the input sentence
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            if (str[i] == '\0')
                break;
            start = i + 1;
        }
        i++;
    }

    printf("%s\n", str);
    return 0;
}