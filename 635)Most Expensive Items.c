Chef is given the prices of N items and wants to buy exactly K of them.
Find the maximum possible total price of the K items he can choose.

  #include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K, C[100], temp, sum = 0;

        scanf("%d %d", &N, &K);

        for (int i = 0; i < N; i++) {
            scanf("%d", &C[i]);
        }

        // Sort prices in descending order
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (C[i] < C[j]) {
                    temp = C[i];
                    C[i] = C[j];
                    C[j] = temp;
                }
            }
        }

        // Add the K most expensive prices
        for (int i = 0; i < K; i++) {
            sum += C[i];
        }

        printf("%d\n", sum);
    }

    return 0;
}

Input
Output
3
5 2
4 9 1 7 6
4 3
10 3 8 5
6 1
2 11 4 9 7 5
16
23
11
