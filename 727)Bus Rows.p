# cook your dish here
t=int(input())
for i in range(t):
    n,m,x=map(int,input().split())
    r=(x-1)//m+1
    print(min(r,n+1-r))
