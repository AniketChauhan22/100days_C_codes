#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
    char *start = str, *end;
    while (*start) {
        while (*start == ' ')
            start++;
        end = start;
        while (*end && *end != ' ')
            end++;
        reverse(start, end - 1);
        start = end;
    }
    printf("%s", str);
    return 0;
}
