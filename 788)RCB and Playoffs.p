# cook your dish here
import sys

def solve():
    # Read the number of test cases
    t = int(sys.stdin.readline())
    
    for _ in range(t):
        # Read X, Y, Z for each test case
        x, y, z = map(int, sys.stdin.readline().split())
        
        # Calculate maximum possible points
        # Each win adds 2 points
        if x + (2 * z) >= y:
            print("YES")
        else:
            print("NO")

if __name__ == '__main__':
    solve()
