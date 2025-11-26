#include <stdio.h>

int main()
{
    int size, i, sum = 0;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("Sum of the array elements = %d\n", sum);
    return 0;
}
