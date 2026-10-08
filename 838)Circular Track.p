# cook your dish here
t=int(input())
for _ in range(t):
    A, B, M = map(int, input().split())

    d = abs(A - B)
    print(min(d, M - d))

    Input
Output
4
1 3 100
1 98 100
40 30 50
2 1 2
2
3
10
1
