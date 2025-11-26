#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i = 0, j, len = 0;
    scanf("%[^\n]", str);
    while (str[len] != '\0') len++;
    j = len - 1;
    while (j >= 0) {
        rev[i] = str[j];
        i++;
        j--;
    }
    rev[i] = '\0';
    printf("%s", rev);
    return 0;
}
