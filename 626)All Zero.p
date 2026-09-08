# cook your dish here
import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    t = int(input_data[0])
    idx = 1
    
    out = []
    for _ in range(t):
        a = int(input_data[idx])
        b = int(input_data[idx+1])
        c = int(input_data[idx+2])
        idx += 3
        
        # Check if C is a multiple of 3 and B matches the total reductions
        if c % 3 == 0 and b == 2 * a + (c // 3):
            out.append("Yes")
        else:
            out.append("No")
            
    print('\n'.join(out))

if __name__ == "__main__":
    solve()
