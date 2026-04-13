#include <stdio.h>

void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Start from the highest power (N-1) and move backwards
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != 0) {
            printf("%d\n", i);
            return;
        }
    }
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    return 0;
}
