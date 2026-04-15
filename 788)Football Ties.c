#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int x, y;
        if (scanf("%d %d", &x, &y) == 2) {
            // The minimum number of draws is x % 3
            printf("%d\n", x % 3);
        }
    }
    
    return 0;
}
