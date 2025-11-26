#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    int last[256], maxLen = 0, start = 0;
    for (int i = 0; i < 256; i++)
        last[i] = -1;
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (last[s[i]] >= start)
            start = last[s[i]] + 1;
        last[s[i]] = i;
        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }
    printf("%d", maxLen);
    return 0;
}
