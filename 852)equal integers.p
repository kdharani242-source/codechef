
t = int(input())

for _ in range(t):
    x, y = map(int, input().split())

    if x < y:
        ans = y - x
    else:
        d = x - y

        if d % 2 == 0:
            ans = d // 2
        else:
            ans = (d + 3) // 2

    print(ans)


Input
5
3 4
5 5
7 3
5 2
7 12
output
1
0
2
3
5
