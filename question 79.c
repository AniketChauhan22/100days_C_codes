#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            for (int i = (d < rows ? d : rows - 1); i >= 0 && (d - i) < cols; i--) {
                printf("%d ", matrix[i][d - i]);
            }
        } else {
            for (int i = (d < cols ? 0 : d - (cols - 1)); i < rows && (d - i) >= 0; i++) {
                printf("%d ", matrix[i][d - i]);
            }
        }
    }
    printf("\n");

    return 0;
}