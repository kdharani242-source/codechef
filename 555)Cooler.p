t = int(input())

for _ in range(t):
    # Read N and M for each test case
    n, m = map(int, input().split())
    
    # Calculate the total minutes using the sum formula:
    # Sum from 1 to N minus Sum from 1 to M
    total_minutes = (n * (n + 1) // 2) - (m * (m + 1) // 2)
    
    # Print the result
    print(total_minutes)
