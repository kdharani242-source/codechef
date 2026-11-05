
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int A, B;
        scanf("%d %d", &A, &B);

        int diff = A - B;

        if (diff >= 10) {
            printf("0\n");
        }
        else {
            int needed = 10 - diff;
            int shots = (needed + 2) / 3;

            printf("%d\n", shots);
        }
    }

    return 0;
}


Input

3
11 2
100 23
3 5
output
1
0
4
