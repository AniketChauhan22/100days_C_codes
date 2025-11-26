Q31 (Loops without Arrays/Strings)
Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int decimalNum;
    int i;

    printf("Enter a number: ");
    scanf("%d", &decimalNum);

    if (decimalNum < 0) {
        printf("Binary representation of negative numbers is not handled by this program.\n");
        return 1;
    }

    if (decimalNum == 0) {
        printf("0\n");
        return 0;
    }

    for (i = 31; i >= 0; i--) {
        if ((decimalNum >> i) & 1) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}