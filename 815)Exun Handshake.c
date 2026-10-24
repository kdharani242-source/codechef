
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;
    return (x > y) - (x < y);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        long long m;
        scanf("%d %lld", &n, &m);

        long long a[n];

        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        qsort(a, n, sizeof(long long), cmp);

        long long people = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            long long new_people = people + a[i];
            long long handshakes = new_people * (new_people - 1) / 2;

            if (handshakes <= m) {
                people = new_people;
                count++;
            } else {
                break;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}


Input
Output
4
4 10
3 1 4 2
3 0
2 5 3
5 45
2 2 2 2 2
3 0
4 1 1
2
0
5
1
