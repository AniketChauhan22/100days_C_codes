#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, sum = 0;

    printf("Enter elements of the square matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of the main diagonal elements is: %d\n", sum);

    return 0;
}
