def solve():
    a, b = map(int, input().split())
    d = b - a

    if d % 3 == 1 or d % 3 == 0:
        print("YES")
    else:
        print("NO")

t = int(input())
for _ in range(t):
    solve()

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
