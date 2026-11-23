
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        int ans = 2 * x - 2 * n;

        if (ans < 0) {
            ans = 0;
        }

        printf("%d\n", ans);
    }

    return 0;
}


Input
6
1 0
1 1
1 2
4 4
4 6
10 20
output
0
0
2
0
4
20
