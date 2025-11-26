#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        if (i == 1 || i == 3 || i == 5) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
            if (i < 5) {
                printf("\n");
            }
        }
    }
    return 0;
}