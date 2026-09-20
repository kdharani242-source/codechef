#include <stdio.h>

void solve() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int ct1 = 0, ct2 = 0;
    for (int i = 0; i < N; i++) {
        // Pattern 1: Expected parity matches index parity (i % 2)
        if (i % 2 == A[i] % 2) {
            ct1++;
        } 
        // Pattern 2: Expected parity is the opposite of index parity
        else {
            ct2++;
        }
    }
    
    // Print the minimum changes needed between the two patterns
    int ans = ct1 < ct2 ? ct1 : ct2;
    printf("%d\n", ans);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
