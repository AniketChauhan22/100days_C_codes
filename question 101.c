#include <stdio.h>

int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);
    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);
    if (first == -1)
        printf("-1 -1");
    else
        printf("%d %d", first, last);
    return 0;
}
