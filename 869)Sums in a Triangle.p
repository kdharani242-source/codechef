# cook your dish here
T = int(input())

for _ in range(T):
    N = int(input())
    a = []

    for i in range(N):
        a.append(list(map(int, input().split())))

    for i in range(N - 2, -1, -1):
        for j in range(i + 1):
            a[i][j] += max(a[i + 1][j], a[i + 1][j + 1])

    print(a[0][0])

    Input
Output
2
3
1
2 1
1 2 3
4
1
1 2
4 1 2
2 3 1 1
5
9
