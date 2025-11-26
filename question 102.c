#include <stdio.h>

int ceilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }
    return result;
}

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    int index = ceilIndex(arr, n, x);
    printf("%d", index);
    return 0;
}
