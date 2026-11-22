# cook your dish here

t = int(input())

for _ in range(t):
    x, y, z = map(int, input().split())

    if x + y <= z:
        print("YES")
    else:
        print("NO")


Input
2
1 2 4
2 2 3
output
YES
NO
