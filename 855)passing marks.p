t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    # your code goes here
    a.sort()

    print(a[n-x] - 1)
Input
Output
3
2 2
5 1
4 1
5 1 7 4
4 3
15 70 100 31
0
6
30
