
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, a[100];
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        qsort(a, n, sizeof(int), cmp);

        int ans = a[n - 1] - a[0];

        // Change the minimum element
        int x = a[n - 1] - a[1];
        if (x < ans)
            ans = x;

        // Change the maximum element
        x = a[n - 2] - a[0];
        if (x < ans)
            ans = x;

        printf("%d\n", ans);
    }

    return 0;
}

Input
Output
3
2
7 4
3
1 4 6
3
1 3 6
0
2
2
