# cook your dish here
def solve():
    a,b,c=map(int,input().split())
    if(a>b+c or b>a+c or c>a+b):
        print("yes")
    else:
        print("no")
t=int(input())
for i in range(t):
    solve()
