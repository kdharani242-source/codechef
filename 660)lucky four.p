

def solve():
    n = input()
    count = 0

    for i in n:
        if i == '4':
            count += 1

    print(count)

t = int(input())

for _ in range(t):
    solve()
Input

5
447474
228
6664
40
81
Output
4
0
1
1
0
