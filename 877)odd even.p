# cook your dish here

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    odd = 0
    even = 0

    for i in a:
        if i % 2 == 0:
            even += 1
        else:
            odd += 1

    print(2 * min(odd, even) + (1 if odd != even else 0))


Input

2
5
1 3 7 4 5
4
1 1 2 4
Output
3
4
