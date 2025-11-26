Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number >= 0) {
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
        }
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}