//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int m;

    // Read the input date
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';  // Remove newline

    // Extract day, month, year
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month string to integer
    sscanf(month, "%d", &m);

    // Print in desired format
    printf("%s-%s-%s\n", day, months[m - 1], year);

    return 0;
}