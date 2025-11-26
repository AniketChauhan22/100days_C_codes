#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]%*c", str);
    if (str[0] != ' ')
        printf("%c", str[0]);
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ')
            printf("%c", str[i]);
    }
    return 0;
}
