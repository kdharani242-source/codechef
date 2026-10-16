# cook your dish here
T = int(input())

for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))

    ans = -1

    for i in range(N - 1):
        if A[i] != A[i + 1]:
            ans = 2
            break

    print(ans)
Input
Output
3
2
5 3
1
1
4
7 7 5 5
2
-1
2
