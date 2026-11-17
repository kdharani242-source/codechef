
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y, d, ans;
        scanf("%d %d", &x, &y);

        if (x < y) {
            ans = y - x;
        } else {
            d = x - y;

            if (d % 2 == 0) {
                ans = d / 2;
            } else {
                ans = (d + 3) / 2;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}


Input
5
3 4
5 5
7 3
5 2
7 12
output
1
0
2
3
5
