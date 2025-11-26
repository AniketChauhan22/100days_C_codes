Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, imaginaryPart;

    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation as 'a' is zero.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        root1 = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and conjugate:\n");
        printf("Root 1 = %.2f + i%.2f\n", root1, imaginaryPart);
        printf("Root 2 = %.2f - i%.2f\n", root1, imaginaryPart);
    }

    return 0;
}