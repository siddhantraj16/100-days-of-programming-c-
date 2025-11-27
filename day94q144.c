//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that accepts structure and prints its members
void display(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s1;

    // Input
    printf("Enter Student Details:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Function call
    display(s1);

    return 0;
}