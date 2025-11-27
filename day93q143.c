//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i, topperIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];   // array of structures

    // Input
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find highest marks
    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Output
    printf("\nTopper: %s (Marks: %.2f)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}