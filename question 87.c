#include <stdio.h>
int main() {
    char str[100];
    int i = 0, spaces = 0, digits = 0, special = 0;
    scanf("%[^\n]", str);
    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
            special++;
        i++;
    }
    printf("%d %d %d", spaces, digits, special);
    return 0;
}
