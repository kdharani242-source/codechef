# cook your dish here
def solve():
    n=int(input())
    li=list(map(int,input().split()))
    if n%2!=0:
        print(-1)
        return
    pos=li.count(1)
    neg=li.count(-1)
    if(pos==neg):
        print(0)
    else:
        print(abs(pos-neg)//2)
t=int(input())
for _ in range(t):
    solve()
