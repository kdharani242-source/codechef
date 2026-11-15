# cook your dish here
t=int(input())
for i in range(t):
    x,y,z=map(int,input().split())
    print((x*z)-(x*y))

    
Input
3
2 5 20
3 1 2
4 5 6
output
30
3
4
