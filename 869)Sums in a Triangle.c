#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, a[100][100];

        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = N - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                if (a[i + 1][j] > a[i + 1][j + 1])
                    a[i][j] += a[i + 1][j];
                else
                    a[i][j] += a[i + 1][j + 1];
            }
        }

        printf("%d\n", a[0][0]);
    }

    return 0;
}


Input
Output
2
3
1
2 1
1 2 3
4
1
1 2
4 1 2
2 3 1 1
5
9
