#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100001];
    int freq[26] = {0};

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower((unsigned char)s[i]);

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    int max_freq = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == max_freq) {
            printf("%c\n", 'a' + i);
            break;
        }
    }

    return 0;
}


Input
Hello, World! 123
  output
l
