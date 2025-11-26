#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n], result[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j)
                prod *= nums[j];
        }
        result[i] = prod;
    }
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i != n - 1)
            printf(" ");
    }
    return 0;
}
