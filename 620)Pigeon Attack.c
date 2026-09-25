#include <stdio.h>

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int done = 0;
    // Simulate minute by minute
    for (int i = 1; i < 300; i++) {
        if (i % k == 0) {
            continue; // Pigeons interrupt Chef, no work done
        }
        
        done++; // Chef works for 1 minute
        if (done == n) {
            printf("%d\n", i);
            break;
        }
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
