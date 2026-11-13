# cook your dish here
t=int(input())
for i in range(t):
    x,y,xr,yr,d=map(int,input().split())
    minimum=min((x/xr),(y/yr))
    if(minimum>=d):
        print('yes')
    else:
        print('no')

Input
3
4 2 1 1 1
4 2 1 3 1
4 2 4 2 2
outpu
YES
NO
NO
