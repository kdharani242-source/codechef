# cook your dish here
t=int(input())
for i in range(t):
    x1,x2,y1,y2=map(int,input().split())
    if(y1/x1<y2/x2):
        print(-1)
    elif(y1/x1>y2/x2):
        print(1)
    else:
        print(0)

  Input
Output
3
10 5 3 20
7 2 7 2
1 5 3 2
-1
0
1
