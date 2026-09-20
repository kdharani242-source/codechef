# cook your dish here
import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return

    T = int(data[0])
    idx = 1
    
    for _ in range(T):
        N = int(data[idx])
        idx += 1
        A = [int(x) for x in data[idx:idx+N]]
        idx += N
        
        ct1, ct2 = 0, 0
        for i in range(N):
            # Pattern 1: Expected parity matches index parity (i % 2)
            if i % 2 == A[i] % 2:
                ct1 += 1
            # Pattern 2: Expected parity is the opposite of index parity
            else:
                ct2 += 1
        
        # The minimum changes needed will be the minimum of mismatches for both patterns
        print(min(ct1, ct2))

if __name__ == '__main__':
    solve()
