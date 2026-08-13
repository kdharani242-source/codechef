#include <stdio.h>

int main() {
	// your code goes here
	int t;
    scanf("%d", &t);
    
    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        // Check if Chef's time is within 107% of the fastest time
        if (100 * y <= 107 * x) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;

}

