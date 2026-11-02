
#include <stdio.h>
#include <string.h>

void solve() {
    int n;
    scanf("%d", &n);

    char s[100005];
    scanf("%s", s);

    int count = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        count++;

        if (count == 3) {
            ans++;
            count = 0;
        }

        if (i < n - 1 && s[i] != s[i + 1]) {
            count = 0;
        }
    }

    printf("%d\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }

    return 0;
}



Input
Output
5
5
AABBB
6
AAABBB
8
AAAAAAAA
6
ABABBA
16
BBBBAAAAABBBBBBB
1
2
2
0
4
