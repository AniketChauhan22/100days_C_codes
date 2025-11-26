#include <stdio.h>
#include <stdlib.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
