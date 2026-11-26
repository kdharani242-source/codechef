
T = int(input())

for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))

    count = 1
    last = A[0] % 2

    for i in range(1, N):
        current = A[i] % 2

        if current != last:
            count += 1
            last = current

    print(count)


Sample 1:
Input
3
5
1 1 2 6 3
4
100 1 98 97
1
5
output
3
4
1
