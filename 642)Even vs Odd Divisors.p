def solve():
    n = int(input())
    if n % 2 != 0:
        print(-1)
    elif n % 4 == 0:
        print(1)
    else:
        print(0)

t = int(input())
for _ in range(t):
    solve()
