# cook your dish here

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    a.sort()

    ans = min(a[n - 1] - a[1], a[n - 2] - a[0])

    print(ans)
Input
Output
3
2
7 4
3
1 4 6
3
1 3 6
0
2
2
