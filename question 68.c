#include <stdio.h>

void deleteElement(int arr[], int n, int position) {
    if (position < 0 || position > n) {
        printf("Invalid position for deletion.\n");
        return;
    }
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int position = 3;
    deleteElement(arr, n, position);
    return 0;
}
