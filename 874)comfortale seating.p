
t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    if a.count(min(a)) >= 2:
        print("YES")
    else:
        print("NO")
Input

3
4
3 1 2 1
3
5 1 3
5
4 4 4 4 4
Output
YES
NO
YES
