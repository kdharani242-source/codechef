Chef has an ore with melting point of X degrees.
Chef’s kiln has a initial temperature of degrees. The temperature of the kiln increases by degrees after the ith minute.
Find the minimum time in minutes after which the ore starts melting.

def solve():
    X, Y = map(int, input().split())

    if Y >= X:
        print(0)
        return

    temp = Y
    minute = 0

    while temp < X:
        minute += 1
        temp += minute

    print(minute)

t = int(input())

for _ in range(t):
    solve()

    Input
Output
3
3 2
5 3
10 5
1
2
3
