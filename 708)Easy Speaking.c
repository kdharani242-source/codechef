#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void solve() {
    int n;
    scanf("%d", &n);
    char s[105];
    scanf("%s", s);
    
    int is_hard = 0;
    
    // Check every contiguous sequence of 4 characters
    for (int i = 0; i <= n - 4; i++) {
        int consonant_count = 0;
        for (int j = 0; j < 4; j++) {
            if (!is_vowel(s[i + j])) {
                consonant_count++;
            }
        }
        if (consonant_count == 4) {
            is_hard = 1;
            break;
        }
    }
    
    if (is_hard) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
