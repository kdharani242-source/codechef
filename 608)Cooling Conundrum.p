def solve():
    x, y = map(int, input().split())
    total_time = 0
    
    # Loop until the dessert cools down from x to y
    while x > y:
        # Calculate ceil(x / 10) using integer arithmetic: (x + 9) // 10
        total_time += (x + 9) // 10
        x -= 1
        
    print(total_time)
t=int(input())
for _ in range(t):
    solve()
