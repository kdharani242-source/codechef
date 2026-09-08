#include <stdio.h>

void solve() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    // Check if C is a multiple of 3 and B matches the total required reductions
    if (c % 3 == 0 && b == 2 * a + (c / 3)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
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
