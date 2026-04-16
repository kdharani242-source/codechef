#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int current_sum = 0;
        for (int i = 0; i < n; i++) {
            int score;
            scanf("%d", &score);
            current_sum += score;
        }
        
        // Total marks required for 50%
        int target = 50 * (n + 1);
        int needed = target - current_sum;
        
        // Logic to determine the output
        if (needed <= 0) {
            printf("0\n");
        } else if (needed > 100) {
            printf("-1\n");
        } else {
            printf("%d\n", needed);
        }
    }
    
    return 0;
}
