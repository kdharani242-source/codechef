t = int(input())

while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    t -= 1
    count = 0

    for i in range(n):
        if b[i] <= 2 * a[i] and a[i] <= 2 * b[i]:
            count += 1

    print(count)


Input
4
3
100 200 300
300 200 100
4
1000 1000 1000 1000
400 500 600 1200
4
800 399 1400 532
2053 2300 3400 23
5
800 850 900 950 1000
600 800 1000 1200 1400
output
1
3
0
5
