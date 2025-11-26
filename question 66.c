#include <stdio.h>

int main() {
    int arr[100];
    int size, element, i, position;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    position = size;
    for (i = 0; i < size; i++) {
        if (arr[i] > element) {
            position = i;
            break;
        }
    }

    for (i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}