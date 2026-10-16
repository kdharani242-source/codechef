#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, A[100000];
        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int ans = -1;

        for (int i = 0; i < N - 1; i++) {
            if (A[i] != A[i + 1]) {
                ans = 2;
                break;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}

Input
Output
3
2
5 3
1
1
4
7 7 5 5
2
-1
2
