#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    for (; originalNumber != 0; originalNumber /= 10) {
        n++;
    }

    originalNumber = number;

    for (; originalNumber != 0; originalNumber /= 10) {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
    }

    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}