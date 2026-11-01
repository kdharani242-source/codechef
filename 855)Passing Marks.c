
#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        int a[100];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        // Sort the array
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        printf("%d\n", a[n - x] - 1);
    }

    return 0;
}


Input
Output
3
2 2
5 1
4 1
5 1 7 4
4 3
15 70 100 31
0
6
30
