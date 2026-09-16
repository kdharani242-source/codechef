def solve():
    n = int(input())
    li = list(map(int, input().split()))
    
    # Initialize the answer with the maximum single item cost
    ans = max(li)
    
    # Check all pairs (i, j) where i < j
    for i in range(n):
        for j in range(i + 1, n):
            # If the condition C_i <= C_j holds, consider their sum
            if li[i] <= li[j]:
                ans = max(ans, li[i] + li[j])
                
    print(ans)

t = int(input())
for _ in range(t):
    solve()
