
#include <stdio.h>

int main() {
    int r1, r2;
    int d1, d2;
    
    // Read initial ratings
    scanf("%d %d", &r1, &r2);
    
    // Read rating changes
    scanf("%d %d", &d1, &d2);
    
    // Calculate final ratings and compare
    if (r1 + d1 > r2 + d2) {
        printf("Dominater\n");
    } else {
        printf("Everule\n");
    }
    
    return 0;
}
