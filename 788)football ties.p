# cook your dish here
t = int(input())

for _ in range(t):
    # Read X and Y
    x, y = map(int, input().split())
    
    # The minimum number of draws is simply X % 3
    print(x % 3)
