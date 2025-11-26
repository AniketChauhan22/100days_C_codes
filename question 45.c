Q45 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double numerator = 2 * (i + 1);
        double denominator = 3 + (4 * i);
        sum += numerator / denominator;
    }

    printf("Sum of the series: %.4f\n", sum);

    return 0;
}