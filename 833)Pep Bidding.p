# cook your dish here
def solve():
    t=int(input())
    A1=sum(list(map(int,input().split())))
    A2=sum(list(map(int,input().split())))
    P1=sum(list(map(int,input().split())))
    P2=sum(list(map(int,input().split())))
    if(A1>P1 and A2>P2):
        print('A')
    elif(P1>A1 and P2>A2):
        print('P')
    else:
        print('DRAW')
n=int(input())
for i in range(n):
    solve()


    Input
Output
3
3
17 9 10
2 1 6
8 16 7
6 2 0
2
100 1
10 0
0 0
5 5
1
1
2
3
4
A
DRAW
P
