
t = int(input())

for i in range(t):
    s = input()
    total = 0

    for ch in s:
        if ch.isdigit():
            total += int(ch)

    print(total)

Input
Output
1
ab1231da
7
