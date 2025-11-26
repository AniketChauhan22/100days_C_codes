Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Input seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}