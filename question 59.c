#include <stdio.h>

void countEvenOdd(int arr[], int n) {
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    countEvenOdd(arr, n);
    return 0;
}
