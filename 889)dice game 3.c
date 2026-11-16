
#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int ans = 13 * (n / 2);

        if (n % 2 == 1) {
            ans += 6;
        }

        printf("%d\n", ans);
    }

    return 0;
}


Input
2
2
4
output
13
26
