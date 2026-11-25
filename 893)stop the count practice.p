
t = int(input())

for i in range(t):
    n = int(input())
    s = input()

    count1 = 0
    count0 = 0
    ans = 0

    for j in range(n):
        if s[j] == '1':
            count1 += 1
        else:
            count0 += 1

        if count1 > count0:
            ans += 1

    print(ans)


Input
3
3
111
3
000
5
10011
output
3
0
2
