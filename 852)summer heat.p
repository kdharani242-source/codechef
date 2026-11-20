# cook your dish here
t=int(input())
for i in range(t):
    a,b,c,d=map(int,input().split())
    print((c//a)+(d//b))

Input
3
100 400 1000 1200
100 450 1000 1350
150 400 1200 1200
output
13
13
11
