
T = int(input())

for _ in range(T):
    N = int(input())
    H = list(map(int, input().split()))

    height = H[-1]
    seconds = 0

    for i in range(N - 1):
        if H[i] >= height:
            seconds = N - 1 - i
            break

    print(seconds)


Input

3
6
2 4 1 7 5 3
4
1 2 3 4
4
3 1 2 3
Output
4
0
3
