def solve():
    n,k=map(int,input().split())
    li=list(map(int,input().split()))
    li.sort(reverse=True)
    total=0
    for i in range(k):
        total+=li[i]
    print(total)
t=int(input())
for j in range(t):
    solve()
