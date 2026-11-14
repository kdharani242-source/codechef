# cook your dish here

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())

    if k == n - 1:
        print("NO")
    else:
        print("YES")


Input
5
1 0
1 1
2 0
2 1
3 1
output
No
Yes
Yes
No
Yes
