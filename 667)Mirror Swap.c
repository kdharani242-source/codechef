#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int a[2 * n];
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &a[i]);
    }
    
    long long ans = 0; // Use long long to prevent potential overflow
    for (int i = 0; i < n; i++) {
        int mirror_idx = 2 * n - 1 - i;
        if (a[i] > a[mirror_idx]) {
            ans += a[i];
        } else {
            ans += a[mirror_idx];
        }
    }
    
    printf("%lld\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
