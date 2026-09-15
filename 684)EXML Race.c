#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int max_speed = -1;
    int best_car = 1;
    
    for (int i = 1; i <= n; i++) {
        int d, t;
        scanf("%d %d", &d, &t);
        
        int speed = d / t;
        
        // If we find a strictly faster car, update the best car and max speed
        if (speed > max_speed) {
            max_speed = speed;
            best_car = i;
        }
    }
    
    printf("%d\n", best_car);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
