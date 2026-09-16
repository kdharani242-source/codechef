#include <stdio.h>
#include <stdlib.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        if (val == 1) {
            pos++;
        } else {
            neg++;
        }
    }
    
    // If N is odd, it's impossible to have an equal number of 1s and -1s
    if (n % 2 != 0) {
        printf("-1\n");
        return;
    }
    
    if (pos == neg) {
        printf("0\n");
    } else {
        // Each operation reduces the difference between pos and neg by 2
        printf("%d\n", abs(pos - neg) / 2);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
