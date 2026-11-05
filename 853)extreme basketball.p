
t = int(input())

for _ in range(t):
    A, B = map(int, input().split())

    diff = A - B

    if diff >= 10:
        print(0)
    else:
        needed = 10 - diff
        shots = (needed + 2) // 3
        print(shots)


Input

3
11 2
100 23
3 5
Output
1
0
4
