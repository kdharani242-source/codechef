#include <stdio.h>

int main() {
    int t;
    // Read the number of test cases
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        int n, k;
        // Read the side lengths N and K
        if (scanf("%d %d", &n, &k) == 2) {
            // Calculate how many K squares fit in one row/column
            int count_per_side = n / k;
            
            // Total squares = count_per_side squared
            printf("%d\n", count_per_side * count_per_side);
        }
    }

    return 0;
}
