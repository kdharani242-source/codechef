# cook your dish here
import sys

def solve():
    # Read number of test cases
    t = int(sys.stdin.readline())
    for _ in range(t):
        # Read the three sides
        sides = list(map(int, sys.stdin.readline().split()))
        
        # Identify the maximum side and the sum of the other two
        m = max(sides)
        s = sum(sides) - m
        
        # If the sum of the two smaller sides is already greater than the largest,
        # no moves are needed. Otherwise, we need (m + 1 - s) moves.
        if s > m:
            print(0)
        else:
            print(m + 1 - s)

if __name__ == '__main__':
    solve()
