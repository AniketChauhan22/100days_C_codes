#include <stdio.h>
#include <limits.h>

int findMostFrequentDigit(int n) {
    int frequency[10] = {0};
    if (n == 0) {
        return 0;
    }
    
    int temp = n < 0 ? -n : n;

    while (temp > 0) {
        int digit = temp % 10;
        frequency[digit]++;
        temp /= 10;
    }

    int maxFrequency = INT_MIN;
    int mostFrequentDigit = -1;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostFrequentDigit = i;
        }
    }
    return mostFrequentDigit;
}

int main() {
    int number = 1223334;
    int digit = findMostFrequentDigit(number);
    printf("The most frequent digit in %d is %d\n", number, digit);
    return 0;
}
