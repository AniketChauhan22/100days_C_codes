#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    scanf("%s", str);
    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("%d %d", vowels, consonants);
    return 0;
}
