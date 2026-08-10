#include <stdio.h>

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int x = 1;
    while (x + k <= n) {
        x += k;
    }
    
    printf("%d\n", x);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
