# cook your dish here
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    if(a+b<3):
        print(1)
    elif(3<=a+b<=10):
        print(2)
    elif(11<=a+b<=60):
        print(3)
    elif(60<=a+b):
        print(4)
Input
Output
4
1 0
4 1
100 0
20 5
1
2
4
3
