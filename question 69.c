#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < firstLargest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {10, 2, 14, 5, 14, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }
    return 0;
}
