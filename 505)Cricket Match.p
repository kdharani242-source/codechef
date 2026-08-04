# cook your dish here
t=int(input())
for i in range(t):
    n,m=map(int,input().split())
    if(m*36>=n):
        print('yes')
    else:
        print('no')
