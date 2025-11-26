#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], max = -1000000, sum = 0;
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > max)
            max = sum;
        if (sum < 0)
            sum = 0;
    }
    printf("%d", max);
    return 0;
}
