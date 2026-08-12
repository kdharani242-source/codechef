#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int a[105];
        int total_sum = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
            total_sum += a[i];
        }
        
        char *ans = "No";
        
        for (int i = 0; i < N; i++) {
            if ((total_sum - a[i]) % 2 == 0) {
                ans = "Yes";
                break;
            } else {
                // Do nothing if the remaining sum is not even
            }
        }
        
        printf("%s\n", ans);
    }
    
    return 0;
}
