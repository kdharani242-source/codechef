#include <stdio.h>

void solve() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    long long total_time = 0;
    
    // Loop until the dessert cools down from x to y
    while (x > y) {
        // Calculate ceil(x / 10) using integer arithmetic: (x + 9) / 10
        total_time += (x + 9) / 10;
        x -= 1;
    }
    
    printf("%lld\n", total_time);
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
