
#include <stdio.h>

int main() {
    int n, x, count = 0, ans = -1;

    scanf("%d", &n);

    int A[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if(A[i] == x) {
            count++;

            if(count == 2) {
                ans = i;
                break;
            }
        }
    }

    if(count == 1)
        printf("-2");
    else
        printf("%d", ans);

    return 0;
}
Input
Output
5
45 56 98 56 32
56
3

v
