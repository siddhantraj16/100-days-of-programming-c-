//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

int main() {
    float a, b, c;

    // Input the three sides
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        // Classify the triangle
        if (a == b && b == c)
            printf("The triangle is Equilateral.\n");
        else if (a == b || b == c || a == c)
            printf("The triangle is Isosceles.\n");
        else
            printf("The triangle is Scalene.\n");
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}