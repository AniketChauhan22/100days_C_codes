Q44 (Loops without Arrays/Strings)
Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double numerator = 1 + (2 * i);
        double denominator = 2 + (2 * i);
        if (i == 0) { // First term is 1, not 1/2
            sum += 1;
        } else {
            sum += numerator / denominator;
        }
    }

    printf("Sum of the series: %.4f\n", sum);

    return 0;
}