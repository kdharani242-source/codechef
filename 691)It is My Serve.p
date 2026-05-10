# Read the number of test cases
t = int(input())

for i in range(t):
    p, q = map(int, input().split())
    # Calculate total serves completed
    total_serves = p + q
    # Calculate how many blocks of 2 serves have passed
    turn = total_serves // 2
    
    # If the number of turns is even, it is Alice's serve
    if turn % 2 == 0:
        print("Alice")
    else:
        print("Bob")
