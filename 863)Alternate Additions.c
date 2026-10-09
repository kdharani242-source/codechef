#include <stdio.h>

void solve() {
    int a, b;
    scanf("%d %d", &a, &b);

    int d = b - a;

    if (d % 3 != 2)
        printf("YES\n");
    else
        printf("NO\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        solve();
    }

    return 0;
}

Input
Output
4
1 2
3 6
4 9
10 20
YES
YES
NO
YES
