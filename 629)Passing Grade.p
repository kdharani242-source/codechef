def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    chef_score = a[0]
    passing_count = 0
    
    for score in a:
        if score >= chef_score:
            passing_count += 1
            
    print(passing_count)

t = int(input())
for _ in range(t):
    solve()
