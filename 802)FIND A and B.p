# cook your dish here
t=int(input())
for i in range(t):
    x,y,z=map(int,input().split())
    if((x*y)%z==0):
        print(x*y,z)
    elif((x*z)%y==0):
        print(x*z,y)
    elif((y*z)%x==0):
        print(y*z,x)
    else:
        print(-1)
