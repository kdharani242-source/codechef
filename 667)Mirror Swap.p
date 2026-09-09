# cook your dish here
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    
    ans = 0
    for i in range(n):
        mirror_idx = 2 * n - 1 - i
        ans += max(a[i], a[mirror_idx])
        
    print(ans)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == '__main__':
    main()
