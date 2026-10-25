
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    total = sum(a)
    loss = min(a[i] - b[i] for i in range(n))

    print(total - loss)

Input
Output
4
3
5 3 8
3 3 4
1
10
5
4
6 3 8 7
5 1 5 1
4
9 8 7 6
9 8 7 6
16
5
23
30
