#include <stdio.h>

void solve() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // Try every integer K from 2 to 99
    for (int k = 2; k < 100; k++) {
        // Check if k does not divide any of the numbers
        if (a % k != 0 && b % k != 0 && c % k != 0) {
            printf("%d\n", k);
            return;
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
