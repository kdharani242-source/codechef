# cook your dish here
def solve():
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    count=0
    for i in range(1,m+1):
        if i not in a:
            count+=1
    print(count)
t=int(input())
for _ in range(t):
    solve()


    Input
Output
3
3 3
1 1 2
1 100
42
3 1
1 1 1
1
99
0
