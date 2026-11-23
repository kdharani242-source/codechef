# cook your dish here

t = int(input())

for _ in range(t):
    n, x = map(int, input().split())

    ans = max(0, 2*x - 2*n)

    print(ans)


Input
6
1 0
1 1
1 2
4 4
4 6
10 20
output
0
0
2
0
4
20
