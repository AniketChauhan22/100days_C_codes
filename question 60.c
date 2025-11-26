#include <stdio.h>

void countPositiveNegativeZero(int arr[], int n) {
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeroes: %d\n", zero_count);
}

int main() {
    int arr[] = {10, -5, 0, 20, -15, 0, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    countPositiveNegativeZero(arr, n);
    return 0;
}
