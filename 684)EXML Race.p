def solve():
    n = int(input())
    max_speed = -1
    best_car = 1
    
    for i in range(1, n + 1):
        d, t = map(int, input().split())
        speed = d // t
        
        if speed > max_speed:
            max_speed = speed
            best_car = i
            
    print(best_car)

t = int(input())
for _ in range(t):
    solve()
