//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[10];
    enum TrafficLight light;

    scanf("%s", input);

    // Convert string to enum value
    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid Input");
        return 0;
    }

    // Output based on enum value
    switch (light) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n"); break;
    }

    return 0;
}