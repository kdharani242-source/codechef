# cook your dish here
t=int(input())
for i in range(t):
    x,a,b=map(int,input().split())
    if(x>=80):
        print((100-x)*b)
    else:
        print(((80-x)*a)+(20*b))

Input
Output
5
0 1 2
79 7 10
80 3 8
99 1 100
100 99 100
120
207
160
100
0
