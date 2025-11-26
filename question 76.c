#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, symmetric = 1;

    printf("Enter elements of the matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) {
            break;
        }
    }

    if (symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
