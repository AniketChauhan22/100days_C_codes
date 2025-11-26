#include <stdio.h>

void insertElement(int arr[], int n, int element, int position) {
    if (position < 0 || position > n) {
        printf("Invalid position for insertion.\n");
        return;
    }
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int element = 10;
    int position = 3;
    insertElement(arr, n, element, position);
    return 0;
}
