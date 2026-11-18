
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char a[10], b[10], c[10], d[10], e[10], f[10];

        scanf("%s %s %s %s %s %s", a, b, c, d, e, f);

        if ((strcmp(a,"W")==0 && strcmp(b,"W")==0 && strcmp(c,"W")==0) ||
            (strcmp(b,"W")==0 && strcmp(c,"W")==0 && strcmp(d,"W")==0) ||
            (strcmp(c,"W")==0 && strcmp(d,"W")==0 && strcmp(e,"W")==0) ||
            (strcmp(d,"W")==0 && strcmp(e,"W")==0 && strcmp(f,"W")==0)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}


Input
4
1 2 W 0 W 6
W W W 6 6 6
W 4 W 0 W 6
1 W W W W 0
output
NO
YES
NO
YES
