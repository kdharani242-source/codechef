#include <stdio.h>
#include <string.h>

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    char a[105], b[105];
    scanf("%s", a);
    scanf("%s", b);
    
    int min_len = (n < m) ? n : m;
    int i;
    
    for (i = 0; i < min_len; i++) {
        if (a[i] == b[i]) {
            putchar(a[i]);
        } else {
            break;
        }
    }
    putchar('\n');
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
