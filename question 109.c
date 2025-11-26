#include <stdio.h>

int main() {
    int n, k, sum = 0, max = -1000000;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
        sum += arr[i];
    max = sum;
    for (int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];
        if (sum > max)
            max = sum;
    }
    printf("%d", max);
    return 0;
}
