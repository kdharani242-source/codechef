# cook your dish here
t=int(input())
for i in range(t):
    a,b,k=map(int,input().split())
    diff=abs(a-b)
    steps=(diff+k-1)//k
    print(steps)
