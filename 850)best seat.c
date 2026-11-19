
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int A[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int smallest = A[0];
    int largest = A[0];

    for (int i = 1; i < n; i++) {
        if (A[i] < smallest)
            smallest = A[i];

        if (A[i] > largest)
            largest = A[i];
    }

    int sum = smallest + largest;
    int ans = A[0];
    int best = abs(2 * A[0] - sum);

    for (int i = 1; i < n; i++) {
        int diff = abs(2 * A[i] - sum);

        if (diff < best || (diff == best && A[i] < ans)) {
            best = diff;
            ans = A[i];
        }
    }

    printf("%d\n", ans);

    return 0;
}


Input
6
1 2 3 7 8 9
output
3
