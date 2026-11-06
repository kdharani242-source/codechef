
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    count = 0
    seen = {0: -1}
    ans = 0

    for i in range(n):

        if a[i] % 2 != 0:
            count += 1

        parity = count % 2

        if parity in seen:
            ans = max(ans, i - seen[parity])
        else:
            seen[parity] = i

    print(ans)


Input
Output
5
2
1 2
5
8 3 6 2 4
9
2 4 6 8 1 10 12 14 16
5
7 3 9 1 5
7
1 2 3 4 5 6 7
1
3
4
4
7
