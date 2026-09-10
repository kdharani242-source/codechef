#include <stdio.h>

int main() {
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        
        // Read all elements first
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int max_height = 0;
        // Check adjacent pairs
        for (int i = 0; i < n - 1; i++) {
            int ht;
            if (a[i] < a[i+1]) {
                ht = a[i];
            } else {
                ht = a[i+1];
            }
            
            // Track the maximum height
            if (ht > max_height) {
                max_height = ht;
            }
        }
        printf("%d\n", max_height);
    }
    return 0;
}
