# cook your dish here
for _ in range(int(input())):
    n, k = map(int, input().split())
    
    done = 0
    # Simulate minute by minute
    for i in range(1, 300):
        if i % k == 0: 
            continue  # Pigeons interrupt Chef, no work done
        
        done += 1     # Chef works for 1 minute
        if done == n:
            print(i)
            break
