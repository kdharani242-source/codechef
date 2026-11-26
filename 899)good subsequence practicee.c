
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[100];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int count = 1;
        int last = A[0] % 2;

        for (int i = 1; i < N; i++) {
            int current = A[i] % 2;

            if (current != last) {
                count++;
                last = current;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}



Sample 1:
Input
3
5
1 1 2 6 3
4
100 1 98 97
1
5
output
3
4
1


