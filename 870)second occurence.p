
n = int(input())
A = list(map(int, input().split()))
x = int(input())

count = 0
ans = -1

for i in range(n):
    if A[i] == x:
        count += 1

        if count == 2:
            ans = i
            break

if count == 1:
    print(-2)
else:
    print(ans)


Input
Output
5
45 56 98 56 32
56
3
