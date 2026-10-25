
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n], b[n];
        int total = 0, min = 1000000000;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            total += a[i];
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);

            if (a[i] - b[i] < min) {
                min = a[i] - b[i];
            }
        }

        printf("%d\n", total - min);
    }

    return 0;
}


Input
Output
4
3
5 3 8
3 3 4
1
10
5
4
6 3 8 7
5 1 5 1
4
9 8 7 6
9 8 7 6
16
5
23
30
