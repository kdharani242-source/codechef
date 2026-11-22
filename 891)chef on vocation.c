
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        if (x + y <= z) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}


Input
2
1 2 4
2 2 3
output
YES
NO
