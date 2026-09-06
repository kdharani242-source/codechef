# cook your dish here
t = int(input())
for i in range(t):
    n, x, y, a, b = map(int, input().split())
    if x * b < y * a:
        print("PETROL")
    elif x * b > y * a:
        print("DIESEL")
    else:
        print("ANY")
