//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

// Nested structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Employee structure containing Date structure
struct Employee {
    char name[50];
    int id;
    struct Date joinDate;
};

int main() {
    struct Employee e;

    // Input
    scanf("%s %d %d %d %d",
          e.name,
          &e.id,
          &e.joinDate.day,
          &e.joinDate.month,
          &e.joinDate.year);

    // Output
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name,
           e.id,
           e.joinDate.day,
           e.joinDate.month,
           e.joinDate.year);

    return 0;
}
