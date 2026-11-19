# cook your dish here

n = int(input())
A = list(map(int, input().split()))

smallest = min(A)
largest = max(A)

center = (smallest + largest) / 2

ans = min(A, key=lambda x: (abs(x - center), x))

print(ans)


Input
6
1 2 3 7 8 9
output
3
