//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    // ---------- Writing to file ----------
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter Name, Roll Number and Marks: ");
        scanf("%s %d %d", name, &roll, &marks);

        // Write each record using fprintf()
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    // ---------- Reading from file ----------
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\nStored Student Records:\n");

    // Read until EOF
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}