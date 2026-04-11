Chef and his friends are going to watch a movie. He will buy 
N
N movie tickets and 
M
M buckets of popcorn for him and his friends.

The price of a movie ticket is 
A
A rupees, and the price of a bucket of popcorn is 
B
B rupees.

However, there is a special offer for a combo pack of 
1
1 movie ticket and 
1
1 bucket of popcorn for 
C
C rupees. It is guaranteed that 
max
⁡
(
A
,
B
)
<
C
≤
A
+
B
max(A,B)<C≤A+B, i.e. the combo is more expensive than a single movie ticket or a single bucket of popcorn, but less expensive than buying them individually.

What is the minimum amount, in rupees, that Chef needs to spend?



# cook your dish here
t = int(input())

for _ in range(t):
    # Read n, m, a, b, c from input
    n, m, a, b, c = map(int, input().split())
    
    # Calculate the maximum number of combos possible
    combos = min(n, m)
    
    # Calculate remaining items
    remaining_n = n - combos
    remaining_m = m - combos
    
    # Calculate total cost
    total_cost = (combos * c) + (remaining_n * a) + (remaining_m * b)
    
    # Print the result
    print(total_cost)
