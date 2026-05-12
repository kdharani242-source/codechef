# cook your dish here
import sys

def solve():
    # Read the number of test cases
    line = sys.stdin.readline()
    if not line:
        return
    t = int(line.strip())
    
    for _ in range(t):
        # Read N and K
        n, k = map(int, sys.stdin.readline().split())
        
        # Calculate squares per side and square it
        count_per_side = n // k
        print(count_per_side * count_per_side)

if __name__ == '__main__':
    solve()
