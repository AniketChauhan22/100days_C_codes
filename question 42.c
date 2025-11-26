Q42 (Loops without Arrays/Strings)
Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, i, sum = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}