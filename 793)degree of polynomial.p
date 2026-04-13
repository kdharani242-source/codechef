# cook your dish here
import sys

def solve():
    # Read the number of terms
    try:
        line1 = sys.stdin.readline()
        if not line1:
            return
        n = int(line1.strip())
        
        # Read the coefficients
        a = list(map(int, sys.stdin.readline().split()))
        
        # Iterate backwards to find the first non-zero coefficient
        # The index i corresponds to the power of x
        for i in range(n - 1, -1, -1):
            if a[i] != 0:
                print(i)
                break
    except ValueError:
        pass

# Read number of test cases
line = sys.stdin.readline()
if line:
    t = int(line.strip())
    for _ in range(t):
        solve()
