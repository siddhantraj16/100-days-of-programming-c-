//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function to find top student
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  // Returning structure
}

int main() {
    int n, i;
    struct Student students[100], top;

    // Number of students
    scanf("%d", &n);

    // Input students
    for (i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Get top student
    top = getTopStudent(students, n);

    // Output
    printf("Top Student: %s | Roll: %d | Marks: %d", top.name, top.roll, top.marks);

    return 0;
}
