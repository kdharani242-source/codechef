
t = int(input())

for _ in range(t):
    n, c = map(int, input().split())
    a = list(map(int, input().split()))

    ans = 0

    while True:
        if min(a) < c and c not in a:
            break

        c += 1
        ans += 1

    print(ans)


Input
4
3 5
10 5 3
4 6
6 8 7 6
4 6
5 7 8 9
5 3
10 9 8 7 6
output
1
3
0
8
