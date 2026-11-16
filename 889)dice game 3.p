
t = int(input())

for _ in range(t):
    n = int(input())
    ans = 13 * (n // 2)

    if n % 2 == 1:
        ans += 6

    print(ans)


Input
2
2
4
output
13
26
