#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}, i;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("%c", str[i]);
                return 0;
            }
        }
    }
    printf("None");
    return 0;
}
