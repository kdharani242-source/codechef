# cook your dish here

t = int(input())

for _ in range(t):
    a, b, c, d, e, f = input().split()

    if (a == 'W' and b == 'W' and c == 'W') or \
       (b == 'W' and c == 'W' and d == 'W') or \
       (c == 'W' and d == 'W' and e == 'W') or \
       (d == 'W' and e == 'W' and f == 'W'):
        print("YES")
    else:
        print("NO")


Input
4
1 2 W 0 W 6
W W W 6 6 6
W 4 W 0 W 6
1 W W W W 0
output
NO
YES
NO
YES
