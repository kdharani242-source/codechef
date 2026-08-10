# cook your dish here
def solve():
    n, k = map(int, input().split())
    x = 1
    while x + k <= n:
        x += k
    print(x)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == '__main__':
    main()
