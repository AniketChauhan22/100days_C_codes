Q41 (Loops without Arrays/Strings)
Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, swappedNum, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    lastDigit = num % 10;
    temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    firstDigit = num / pow(10, count - 1);
    swappedNum = lastDigit * pow(10, count - 1) + (num % (int)pow(10, count - 1)) - lastDigit + firstDigit;
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    return 0;
}