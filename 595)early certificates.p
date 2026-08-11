# cook your dish here
import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return

    T = int(data[0])
    idx = 1
    
    out = []
    for _ in range(T):
        n = int(data[idx])
        m = int(data[idx+1])
        a = data[idx+2]
        b = data[idx+3]
        idx += 4
        
        ans = []
        for i in range(min(n, m)):
            if a[i] == b[i]:
                ans.append(a[i])
            else:
                break
        out.append("".join(ans))
        
    print("\n".join(out))

if __name__ == '__main__':
    solve()
