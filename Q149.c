#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student *s;

    // allocate memory dynamically for 1 structure
    s = (struct Student *)malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // input details
    printf("Enter name: ");
    // read string with spaces
    fgets(s->name, sizeof(s->name), stdin);

    printf("Enter age: ");
    scanf("%d", &s->age);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // print details
    printf("\n--- Student Details ---\n");
    printf("Name  : %s", s->name);  // fgets already stores newline
    printf("Age   : %d\n", s->age);
    printf("Marks : %.2f\n", s->marks);

    // free allocated memory
    free(s);

    return 0;
}
