# cook your dish her
def solve():
    l,r=map(int,input().split())
    count=0
    for i in range(l,r+1):
        if i%10 in (2,3,9):
            count+=1
    print(count)
t=int(input())
for _ in range(t):
    solve()

Input
Output
2
1 10
11 33
3
8
