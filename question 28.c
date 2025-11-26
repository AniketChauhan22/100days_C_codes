Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    int i;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no even numbers to multiply in the given range.\n");
        return 1;
    }

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}