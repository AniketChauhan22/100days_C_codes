#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[20];
    int i = 0, j = 0, k = 0;
    scanf("%[^\n]%*c", str);
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            printf("%c", word[0]);
            j = 0;
            k = i;
        }
        i++;
    }
    word[j] = '\0';
    printf(" %s", word);
    return 0;
}
