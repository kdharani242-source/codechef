
def solve():
    n = int(input())
    s = input().strip()

    count = 0
    c = 0

    for i in range(n):
        count += 1

        if count == 3:
            c += 1
            count = 0

        if i < n - 1 and s[i] != s[i + 1]:
            count = 0

    print(c)


t = int(input())

for _ in range(t):
    solve()


Input
Output
5
5
AABBB
6
AAABBB
8
AAAAAAAA
6
ABABBA
16
BBBBAAAAABBBBBBB
1
2
2
0
4
